import numpy as np 

elements_1 = input("Input elements for input 1: ")

Input_1 = list(map(int, elements_1.split()))

elements_2 = input("Input elements for input 2: ")

Input_2 = list(map(int, elements_2.split()))

Array = np.hstack((Input_1, Input_2))

print("The horizontally stacked array:", Array)

