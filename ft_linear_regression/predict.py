import time
import sys
import pandas as pd
import numpy as np
import train as ft

class colors:
    blue = '\033[94m'
    green = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'

def check_pred():
    resp = input("Check predicted datas (y/n) ?")
    if resp != "y":
        exit()
    else:
        x, y = ft.get_datas()
        x_scalled = ft.scall_datas(x)
        a, b = ft.get_thetas(x_scalled, y)
        print("My pred :   price :     km :           dif : \n")
        for i in range(0, len(x)):
            pred = b + a * x_scalled[i]
            print("%g"%pred,"      ", y[i],"     " , x[i], "    ", y[i] - pred)
   
def print_pred(pred):
    percent = 0
    for i in range(0,15):
        percent += 4
        time.sleep(0.1)
        sys.stdout.write(colors.WARNING + "{}%".format(percent))
        sys.stdout.write(" ")
        sys.stdout.flush()
    sys.stdout.write("100%" + colors.ENDC + " ]\n")
    print("Done.\nThis is the price you'll pay:" + colors.green + " {} ".format("%g"%pred) + colors.ENDC + "euros")

def get_thetas():
    try:
        fd = open("thetas", "r")
        arg = fd.read()
        a, b = arg.split(',')
    except:
        input("I'll predict the price. Just tell me how many km you plaining to do :")
        print("0 euros : Just train me !")
        exit()
    return a, b

def get_x_datas():
    data = pd.read_csv('data.csv')
    x_data = data.iloc[:, :-1].values
    return x_data

def get_pred(a, b, x_datas):
    print(colors.blue + "I'll predict the price. Just tell me how many km you plaining to do :" + colors.ENDC)
    try:
        x = input()
        x = float(x)
    except:
        print("Bad value ;O")
        exit()
    if  x < 10000 or x > 300000:
        print("Error : must be between 10 000 km and 300 000 km (because the jeux de données is tout pourrit) ")
        exit()
    print(colors.green + "Thanks, calculating right now\n"+ colors.ENDC + "[" , end=' ')  
    x = float((x - min(x_datas)) / (max(x_datas) - min(x_datas)))
    pred = float(a) + float(b) * x
    return pred

def main():
    a , b = get_thetas()
    x_scalled = get_x_datas()
    pred = get_pred(a, b, x_scalled)
    print_pred(pred)
    check_pred()

if __name__ == '__main__':
    main()