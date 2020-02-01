import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

def save_it(a, b):
    fd = open("thetas", "w")
    fd.write("{},{}".format(b,a))
    fd.close()

def get_derive(x, y, a, b):
    new_a = 0
    new_b = 0
    for i in range(0, len(x)):
        tmp_a = x[i] * (a * x[i] + b - y[i])
        tmp_b = a * x[i] + b - y[i]
        new_a += tmp_a
        new_b += tmp_b
    a = (1 / len(x)) * new_a
    b = (1 / len(x)) * new_b
    return a , b

def get_thetas(x, y):
    a = 0.0
    b = 0.0
    learning_rate = 0.1
    epoch = 3000
    for i in range(epoch):
        tmp_a, tmp_b = get_derive(x, y, a, b) 
        a = a - (learning_rate * tmp_a)
        b = b - (learning_rate * tmp_b)
    return a, b

def scall_datas(x):
    x_scalled = []
    for i in range(0, len(x)):
        x_tmp = float((x[i] - min(x)) / (max(x) - min(x)))
        x_scalled.append(x_tmp)
    return x_scalled

def get_datas():
    data = pd.read_csv('data.csv')
    X = data.iloc[:, :-1].values
    Y = data.iloc[:, 1].values
    Y = list(map(float, Y))
    return X, Y

def show_graph(a, b, x, x_scalled):
    data = np.loadtxt("data.csv", dtype = np.longdouble, delimiter = ',', skiprows = 1)
    y = []
    for i in range(0, len(x_scalled)):
        y.append(b + a * x_scalled[i])
    plt.plot(data[:, 0], data[:, 1], 'ro', markersize=4)  
    plt.plot(x, y)
    plt.xlabel('km')
    plt.ylabel('price')    
    plt.show()

def main():
    x, y = get_datas()
    x_scalled = scall_datas(x)
    a, b = get_thetas(x_scalled, y)
    save_it(a, b)
    show_graph(a, b, x, x_scalled)

if __name__ == '__main__':
    main()