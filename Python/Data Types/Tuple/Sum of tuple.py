elements = input("Input elements: ")

List = list(map(int, elements.split()))
Tuple = tuple(List)

Sum = sum(Tuple)
print("The sum of tuple:", Sum)
