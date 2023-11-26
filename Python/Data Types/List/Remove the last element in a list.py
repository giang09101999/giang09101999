string = input("Input element: ")

List = list(map(str, string.split()))

print("The original list:", List)
List.pop()
print("The updated list:", List)
