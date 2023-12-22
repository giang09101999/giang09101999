from collections import deque

elements = input("Input elements: ")
List = list(map(int, elements.split()))


de = deque(List)

append_right = int(input("Input value for appending right: "))
de.append(append_right)

append_left = int(input("Input value for appending left: "))
de.appendleft(append_left)

print(de)