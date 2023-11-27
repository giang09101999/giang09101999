elements = input("Input elements: ")

Set = set(map(int, elements.split()))

print("The original set: ", Set)

Set.clear()
print("The cleared set:", Set)
