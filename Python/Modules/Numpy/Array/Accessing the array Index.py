import numpy as np 

elements = input("Input elements: ")

List = list(map(int, elements.split()))

Array = np.array(List)

start_point = int(input("Input start point: "))
end_point = int(input("Input end point: "))

print("The original array:", Array)
print("The range of indeces:", Array[start_point:end_point])