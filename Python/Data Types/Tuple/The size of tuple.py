elements = input("Input elements: ")

List = list(map(int, elements.split()))
Tuple = tuple(List)

print("The size of tuple:", len(Tuple))
