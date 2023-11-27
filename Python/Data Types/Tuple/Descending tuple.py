elements = input("Input elements: ")

List = list(map(int, elements.split()))
List.sort(reverse = True)

Descending_tuple = tuple(List)
print("The descending tuple:", Descending_tuple)
