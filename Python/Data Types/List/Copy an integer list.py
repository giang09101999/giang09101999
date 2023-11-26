num = input("Input numbers: ")

List = list(map(int, num.split()))

Copied_list = List.copy()

print("The original list:", List)
print("The copied list:", Copied_list)
