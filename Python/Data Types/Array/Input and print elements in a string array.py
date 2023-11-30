import numpy as np

Elements = input("Input elements: ")
List = list(map(str, Elements.split()))

Array = np.array(List)

print("The array:", Array)
