elements = input("Input elements: ")

List = list(map(int, elements.split()))
Max = max(List)

print("The original list:", List)
print("The max of list is: ", Max)