import numpy as np 

elements = input("Input elements: ")

List = list(map(int, elements.split()))

Array = np.array(List)

v = Array.view()

print("The original array:", Array)
print("the viewed array:", v)