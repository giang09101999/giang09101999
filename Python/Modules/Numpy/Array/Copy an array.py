import numpy as np 

elements = input("Input elements: ")

List = list(map(int, elements.split()))

Array = np.array(List)

print("The array:", Array)

Array_2 = np.copy(Array)

print("The copied array:", Array_2)