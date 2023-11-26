string = input("Input elements: ")

List = list(map(str, string.split()))

Copied_list = List.copy()
print("The original list:", List)
print("The copied list:", Copied_list)
