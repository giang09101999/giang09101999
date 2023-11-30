import numpy as np

Elements = input("Input elements: ")
List = list(map(int, Elements.split()))


Array = np.array(List)
print("The original array: ", Array)

Array[::-1].sort()
print("The descending array: ", Array)
