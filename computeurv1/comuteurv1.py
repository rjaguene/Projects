import argparse
import re
import sys
import math

class colors:
    blue = '\033[94m'
    green = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'

def ft_sqrt(nb):
    x1 = (nb * 1.0) / 2
    x2 = (x1 + (nb / x1)) / 2
    while (abs(x1 - x2) > 0):
        x1 = x2
        x2 = (x1 + (nb / x1)) / 2
    return x2

def check_incorrect_expr(abc):   
    if abc['a'] == 0 and abc['b'] == 0:
        print(colors.green +'Polynomial degree: ' + colors.ENDC + '0')
        print('No solution')
        exit()
    if abc['a'] == 0:
        print(colors.green +'Polynomial degree: ' + colors.ENDC + '1')
        print(colors.blue + "The solution is:" + colors.ENDC)
        print((-abc['c'] / abc['b']))
        exit()
    
def print_max_degree(abc, all_degree):
    check_incorrect_expr(abc)
    print(colors.green +'Polynomial degree: ' + colors.ENDC + str(max(all_degree)))

def solve(abc, all_degree):
    delta = pow(2, abs(abc['b'])) - (4 * abc['a'] * abc['c'])
    if delta > 0:
        x1 = (-abc['b'] + ft_sqrt(delta)) / (2 * abc['a'])
        x2 = (-abc['b'] - ft_sqrt(delta)) / (2 * abc['a'])
        print (colors.blue + "Discriminant is strictly positive, the two solutions are:" + colors.ENDC)
        print("{}\n{}".format(x2, x1))
    elif delta == 0:
        x1 = (-abc['b'] / (2 * abc['a']))
        print (colors.blue + "Discriminant egal zero, the solution is:" + colors.ENDC)
        print("{}".format(x1))
    else:
        x1 = (-abc['b'] + ft_sqrt(-delta)) / (2 * abc['a'])
        x2 = (-abc['b'] - ft_sqrt(-delta)) / (2 * abc['a'])
        print (colors.blue + "Discriminant is strictly negative, the two solutions are:" + colors.ENDC)
        print("{}\n{}".format(x2, x1))

def print_reduct_form(abc):
    print(colors.green + 'Reducted Form:' + colors.ENDC),
    if abc['c'] != 0:
        print("{}{}".format("%g"%abc['c'], " * X^0")),
    if abc['b'] > 0:
        print("{}{}{}".format("+ ","%g"%abc['b'], " * X^1")),
    elif abc['b'] < 0: 
        print("{}{}{}".format("- ","%g"%-abc['b'], " * X^1")),
    if abc['a'] > 0:
        print("{}{}{}".format("+ ","%g"%abc['a'], " * X^2 = 0"))
    elif abc['a'] < 0:
        print("{}{}{}".format("- ","%g"%-abc['a'], " * X^2 = 0"))
    else:
        print('= 0')

def get_abc(all_digit, all_degree):
    a = 0   
    a_nb = []
    b_nb = []
    c_nb = []
    while a < len(all_degree):
        if all_degree[a] == 2:
            a_nb.append(all_digit[a])
        elif all_degree[a] == 1:
            b_nb.append(all_digit[a])
        elif all_degree[a] == 0:
            c_nb.append(all_digit[a])
        a += 1
    a_nb = sum(a_nb)
    b_nb = sum(b_nb)
    c_nb = sum(c_nb)
    abc = {"a": a_nb, "b": b_nb, "c": c_nb}
    return abc

def get_expression(arg):
    all_degree = list(map(int,re.findall(r'\^([0-9]+)', sys.argv[1])))
    if max(all_degree) > 2:
        print (colors.FAIL + "The polynomial degree is stricly greater than 2, I can't solve." + colors.ENDC)
        exit()
    digit_left , digit_right = arg.split('=')
    digit_left = re.findall(r'[-+]?[0-9]*\.?[0-9]*', digit_left)
    digit_right = re.findall(r'[-+]?[0-9]*\.?[0-9]*', digit_right)
    digit_left = [x for x in digit_left if '+' in x or '-' in x]
    digit_right =  [x for x in digit_right if '+' in x or '-' in x]
    digit_left = list(map(float, digit_left))
    digit_right = list(map(float, digit_right))
    digit_right = [ -x for x in digit_right]
    all_digit = digit_left + digit_right
    return all_digit, all_degree

def pars_arg(arg):
    if arg[0] != '+' and arg[0] != '-':
        arg = "+" + arg
    arg = arg.replace(" ","")
    i = 0
    while i < len(arg):
        if arg[i] == '=' and arg[i + 1] != '-':
            arg = arg[0:i + 1] + "+" + arg[i + 1:]
            break
        i += 1
    return arg

def check_arg():
    if len(sys.argv) > 2 or len(sys.argv) < 2:
        print("The program should receive one argument.")
        exit()
    arg = sys.argv[1]
    reg = re.findall(r'\^\-([0-9]+)', arg)
    if reg:
        print('Error: expression must be valid')
        exit()
    reg = re.findall(r'\^\+([0-9]+)', arg)
    if reg:
        print('Error: expression must be at the good format')
        exit()
    return arg

def main():
    all_digit, all_degree = get_expression(pars_arg(check_arg()))
    abc = get_abc(all_digit, all_degree)
    print_reduct_form(abc)
    print_max_degree(abc, all_degree)
    solve(abc,all_degree)

if __name__ == '__main__':
    main()