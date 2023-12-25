import numpy as np

elements = input("Input elements: ")

List = list(map(int, elements.split()))

Array = np.array(List)

print("The array:", Array)