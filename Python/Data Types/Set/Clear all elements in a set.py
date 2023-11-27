elements = input("Input elements: ")

List = list(map(int, elements.split()))
Set = set(List)
print("The original set: ", Set)

Set.clear()
print("The cleared set:", Set)
