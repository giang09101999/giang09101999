elements = input("Input elements: ")

List = list(map(int, elements.split()))
Set = set(List)
print("The original set: ", Set)

new_set = Set.copy()
print("The copied set:", new_set)
