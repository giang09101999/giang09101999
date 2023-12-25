import numpy as np 

element_1 = input("Input elements for the first row: ")
element_2 = input("Input elements for the second row: ")

row_1 = list(map(int, element_1.split()))
row_2 = list(map(int, element_2.split()))

Array = np.array([row_1, row_2])

print("The 2-dimensional array:",Array)