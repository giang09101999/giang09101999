elements = input("Input elements: ")

Set = set(map(int, elements.split()))

value = int(input("Input removed value: "))

print("The original set:", Set)
Set.remove(value)
print("The updated set:", Set)
