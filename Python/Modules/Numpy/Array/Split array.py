import numpy as np

elements = input("Input elements: ")

List = list(map(int, elements.split()))

Array = np.array(List)

segment = int(input("Input number of segments: "))

print("The original array:", Array)
Array = np.array_split(Array, segment)

print("The splitted array:", Array)