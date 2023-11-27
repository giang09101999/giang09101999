elements = input("Input elements: ")

List = list(map(int, elements.split()))
Min = min(List)

print("The original list:", List)
print("The min of list is: ", Min)
