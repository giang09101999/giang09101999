import numpy as np

Elements = input("Input elements: ")

List = list(map(int, Elements.split()))

Array = np.array(List)

print("The original array: ", Array)

new_array = np.copy(Array)

print("New array: ", new_array)