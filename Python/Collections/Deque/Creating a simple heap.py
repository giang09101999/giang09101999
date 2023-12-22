import heapq

elements = input("Input elements: ")

List = list(map(int, elements.split()))
print("The original list:", List)

heapq.heapify(List)

print("The created heap is:", List)
