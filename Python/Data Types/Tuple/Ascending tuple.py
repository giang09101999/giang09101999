elements = input("Input elements: ")

List = list(map(int, elements.split()))
Tuple = tuple(List)
print("The original tuple:", Tuple)

Ascending_tuple = tuple(sorted(Tuple))
print("The ascending tuple: ", Ascending_tuple)
print(type(Ascending_tuple))
