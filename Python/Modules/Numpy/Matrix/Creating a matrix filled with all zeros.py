import numpy as np 

rows = int(input("Input number of rows: "))
columns = int(input("Input number of columns: "))

Matrix = np.zeros([rows, columns], dtype = int)

print("The matrix:", Matrix)