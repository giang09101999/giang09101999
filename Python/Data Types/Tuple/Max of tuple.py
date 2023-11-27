elements = input("Input elements: ")

List = list(map(int, elements.split()))
Tuple = tuple(List)

Max = max(Tuple)
print("The maximum value of tuple:", Max)
