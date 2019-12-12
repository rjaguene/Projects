from sys import argv
from re import compile

#
# ComputerV1
#
# ./computerv1.py <expression>
#
# Examples:
#  5 * X^0 + 4 * X^1 - 9.3 * X^2 = 1 * X^0
#  4 * X^0 + 4 * X^1 - 9.3 * X^2 = 0
#  5 * X^0 + 4 * X^1 = 4 * X^0
#  1 * X^0 + 4 * X^1 = 0
#  8 * X^0 - 6 * X^1 + 0 * X^2 - 5.6 * X^3 = 3 * X^0
#  5 * X^0 - 6 * X^1 + 0 * X^2 - 5.6 * X^3 = 0
#  5 + 4 * X + X^2= X^2
#

class Polynom():

	neg = None
	nb = 0
	x = False
	pwr = 0

	def __init__(self, m, neg = None, nb = 0.0, x = False, pwr = 0):
		self.neg = neg
		self.nb = nb
		self.x = x
		self.pwr = pwr
		if m != None:
			if len(m.group(1)) > 0:
				self.neg = m.group(1)
				if self.neg == '=':
					raise
			if m.group(2) == None:
				self.nb = 1.0
			else:
				self.nb = float(m.group(2))
			if m.group(3) != None:
				self.x = True
				if m.group(4) != None:
					self.pwr = int(m.group(4))
				else:
					self.pwr = 1
		if self.nb < 0.0:
			self.neg = "+" if self.neg == "-" else "-"
			self.nb = -self.nb
		if self.x and self.pwr == 0:
			self.x = False

	def equmbr(self):
		if self.neg == "-":
			return -self.nb
		return self.nb

	def tostr(self):
		s = ""
		if self.neg != None:
			s += self.neg
			s += " "
		if self.x and (self.nb == 1 or self.nb == -1) and self.pwr != 0:
			if self.pwr == 1:
				s += "X"
			else:
				s += "X^%d" % (self.pwr)
		elif self.x and self.nb != 0 and self.pwr != 0:
			if self.pwr == 1:
				s += "%sX" % str(self.nb)
			else:
				s += "%sX^%d" % (str(self.nb), self.pwr)
		else:
			s += str(self.nb)
		return s


reg_polynom = compile('([-+=]?)\s*([0-9\.]+)?(\s*\*?\s*[xX](?:\s*\^\s*([0-9]+))?)?\s*')
reg_space = compile('\s+')


class Computer():

	left = []
	right = []

	def __init__(self):
		self.left = []
		self.right = []

	def parse(self, eq):
		pos = 0
		left = True
		while pos < len(eq):
			if eq[pos:pos + 1] == "=" and left and len(self.left) > 0:
				left = False
				pos += 1
			m = reg_space.match(eq, pos)
			if m != None:
				pos += len(m.group(0))
				continue
			m = reg_polynom.match(eq, pos)
			if m == None or len(m.group(0)) <= 0:
				print("\033[31mUnexpected syntax: '%s'\033[39m" % (eq[pos:pos + 5]))
				return False
			try:
				p = Polynom(m)
				if p.neg == None:
					if left and len(self.left) > 0:
						p.neg = "+"
					elif not left and len(self.right) > 0:
						p.neg = "+"
			except:
				print("\033[31mInvalid syntax: '%s'\033[39m" % (eq[pos:pos + 5]))
				return False
			if left:
				self.left.append(p)
			else:
				self.right.append(p)
			pos += len(m.group(0))
		if len(self.left) == 0:
			if len(self.right) == 0:
				print("\033[31mBad argument\033[39m")
				return False
			self.left.append(Polynom(None))
		if len(self.right) == 0:
			self.right.append(Polynom(None))
		print("Equation: \033[36m" + self.tostr() + "\033[39m")
		return True

	def formereduite(self):
		tmp = {}
		for p in self.left:
			if not p.pwr in tmp:
				tmp[p.pwr] = 0.0
			tmp[p.pwr] += p.nb if p.neg != "-" else -p.nb
		for p in self.right:
			if not p.pwr in tmp:
				tmp[p.pwr] = 0.0
			tmp[p.pwr] -= p.nb if p.neg != "-" else -p.nb
		self.left = []
		for pwr in sorted(tmp):
			if tmp[pwr] != 0:
				self.left.append(Polynom(None, "+" if len(self.left) > 0 else None, tmp[pwr], True, pwr))
		self.right = [Polynom(None)]
		if len(self.left) == 0:
			self.left.append(Polynom(None))
		print("Reduced form: \033[36m" + self.tostr() + "\033[39m")
		return True

	def calculatrice(self):
		degree = 0
		for p in self.left:
			if p.pwr > degree:
				degree = p.pwr
		print("Polynomial degree: \033[32m%d\033[39m" % degree)
		if degree == 0:
			a = self.left[0].equmbr()
			if a == 0:
				print("\033[32mEvery real are solution\033[39m")
			else:
				print("\033[31mNo solution\033[39m")
			return False
		elif degree == 1:
			if len(self.left) > 1:
				b = self.left[0].equmbr()
				a = self.left[1].equmbr()
			else:
				b = 0
				a = self.left[0].equmbr()
			print("\033[90ma = " + str(a) + "\033[39m")
			print("\033[90mb = " + str(b) + "\033[39m")
			print("The solution is:")
			print("\033[90m-b / a = \033[32m" + str(-b / a) + "\033[39m")
		elif degree == 2:
			if len(self.left) > 2:
				c = self.left[0].equmbr()
				b = self.left[1].equmbr()
				a = self.left[2].equmbr()
			elif len(self.left) > 1:
				c = 0
				b = self.left[0].equmbr()
				a = self.left[1].equmbr()
			else:
				c = 0
				b = 0
				a = self.left[0].equmbr()
			print("\033[90ma = " + str(a) + "\033[39m")
			print("\033[90mb = " + str(b) + "\033[39m")
			print("\033[90mc = " + str(c) + "\033[39m")
			d = b ** 2 - (4 * a * c)
			print("\033[90md = " + str(d) + "\033[39m")
			if d > 0:
				print("Discriminant is strictly positive, the two solutions are:")
				print("\033[90m(-b - (d ** 0.5)) / (2 * a) = \033[32m" + str((-b - (d ** 0.5)) / (2 * a)) + "\033[39m")
				print("\033[90m(-b + (d ** 0.5)) / (2 * a) = \033[32m" + str((-b + (d ** 0.5)) / (2 * a)) + "\033[39m")
			else:
				if d == 0:
					print("Discriminant is 0, the solution is:")
					print("\033[90m-b / (2 * a) = \033[32m" + str(-b / (2 * a)))
				else:
					print("Discriminant is strictly negative, the two solutions are:")
					print("\033[90m(-b - (d ** 0.5)) / (2 * a) = \033[32m" + str((-b - (abs(d) ** 0.5)) / (2 * a)) + "i\033[39m")
					print("\033[90m(-b + (d ** 0.5)) / (2 * a) = \033[32m" + str((-b + (abs(d) ** 0.5)) / (2 * a)) + "i\033[39m")
		else:
			print("\033[31mThe polynomial degree is stricly greater than 2, I can't solve.\033[39m")
			return False
		return True

	def tostr(self):
		s = ""
		for p in self.left:
			s += p.tostr()
			s += " "
		s += "="
		for p in self.right:
			s += " "
			s += p.tostr()
		return s


if len(argv) <= 1:
	print("\033[31mNot enougth argument\033[39m")
else:
	c = Computer()
	if not c.parse(argv[1]):
		exit(1)
	if not c.formereduite():
		exit(1)
	if not c.calculatrice():
		exit(1)
