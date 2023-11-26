string = input("Input elements: ")

List = string.split()

index = int(input("Input index you want to add: "))
content = input("Input string: ")
List.insert(index, content)
print(List)
