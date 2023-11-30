import numpy as np

Elements = input("Input elements: ")
List = list(map(int, Elements.split()))


Array = np.array(List)
print("The original array: ", Array)

List.sort(reverse= True)
Array = np.array(List)
print("The descending array: ", Array)
