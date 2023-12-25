import numpy as np 

elements = input("Input elements: ")

List = list(map(int, elements.split()))

Array = np.array(List)

value = int(input("Input value to append: "))

print("The original array:", Array)
Array = np.append(Array, value)

print("The appended array:", Array)