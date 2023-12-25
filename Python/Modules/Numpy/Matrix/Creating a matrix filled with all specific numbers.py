import numpy as np 

rows = int(input("Input number of rows: "))
columns = int(input("Input number of columns: "))

value = int(input("Input a specificc value: "))

Matrix = np.full((rows, columns), value, dtype= int)

print("The matrix with full of " + str(value) + " :\n", Matrix)