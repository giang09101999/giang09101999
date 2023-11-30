import array as arr
import numpy as np

Elements = input("Input elements: ")
List = list(map(int, Elements.split()))

Array = arr.array("i", List)

print("The original array: ", Array)
ascending_array = np.sort(Array)

print("The ascending array: ", ascending_array)
