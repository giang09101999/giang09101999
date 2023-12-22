from collections import deque

elements = input("Input elements: ")

List = list(map(int, elements.split()))

de = deque(List)

print("The original deque:", de)
de.reverse()
print("The reversed deque:", de)