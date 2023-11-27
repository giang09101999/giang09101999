elements = input("Input elements: ")

Set = set(map(int, elements.split()))

print("The original set: ", Set)

new_set = Set.copy()
print("The copied set:", new_set)
