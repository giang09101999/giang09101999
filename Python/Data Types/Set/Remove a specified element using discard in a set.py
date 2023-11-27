elements = input("Input elements: ")

List = list(map(int, elements.split()))
Set = set(List)

value = int(input("Input removed value: "))

print("The original set:", Set)
Set.discard(value)
print("The updated set:", Set)
