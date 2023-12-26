import numpy as np 

elements_1 = input("Input elemnents of Array 1: ")

List_1 = list(map(int, elements_1.split()))

elements_2 = input("Input elements of Array 2: ")

List_2 = list(map(int, elements_2.split()))

Array_1 = np.array(List_1)

Array_2 = np.array(List_2)

Array = np.concatenate([Array_1, Array_2])

print("The joined array: ", Array)