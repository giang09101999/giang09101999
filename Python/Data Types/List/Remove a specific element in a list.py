string = input("Input elements: ")

List = list(map(str, string.split()))

print("The original list:", List)

content = input("Input content: ")
List.remove(content)
print("The updated list:", List)
