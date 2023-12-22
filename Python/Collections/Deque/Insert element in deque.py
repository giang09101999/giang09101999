from collections import deque
elements = input("Input elements: ")

List = list(map(int, elements.split()))

de = deque(List)

print("The original deque:", de)

value = int(input("Input value: "))
index = int(input("Input index: "))

de.insert(index, value)
print("The deque after inserting:", de)