import numpy as np 

Elements = input("Input elements: ")
List = list(map(int, Elements.split()))

Array = np.array(List)

item = int(input("Input item: "))

print("The value of item is:", Array[item])
