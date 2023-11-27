elements = input("Input elements: ")

Set = set(map(int, elements.split()))

value = int(input("Input a desired value: "))

print("The original set:", Set)
Set.add(value)
print("The updated set:", Set)
