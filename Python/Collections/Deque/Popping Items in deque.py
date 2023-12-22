from collections import deque
elements = input("Input elements: ")

List = list(map(int, elements.split()))

de = deque(List)

print("The original deque:", de)

de.pop()
print("The deque after removing the last right element: ", de)

de.popleft()
print("The deque after removing the first left element: ", de)






