from collections import deque

elements = input("Input elements: ")

List = list(map(int, elements.split()))

de = deque(List)

print("The original deque:", de)

value = int(input("Input value you want to remove: "))

de.remove(value)

print("The deque after removing element:", de)