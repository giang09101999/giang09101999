elements = input("Input elements: ")

List = list(map(int, elements.split()))
Tuple = tuple(List)

Min = min(Tuple)
print("The minimum value of tuple:", Min)
