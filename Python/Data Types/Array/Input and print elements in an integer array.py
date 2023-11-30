import numpy as np

Elements = input("Input elements: ")

List = list(map(int, Elements.split()))

Array = np.array(List)

print("The array: ", Array)




