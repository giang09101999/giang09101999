elements_tuple_1 = input("Input elements in tuple 1: ")
elements_tuple_2 = input("Input elements in tuple 2: ")

List_1 = list(map(int, elements_tuple_1.split()))
List_2 = list(map(int, elements_tuple_2.split()))

Tuple_1 = tuple(List_1)
Tuple_2 = tuple(List_2)

print("The tuple 1: ", Tuple_1)
print("The tuple 2: ", Tuple_2)

Tuple = Tuple_1 + Tuple_2
print("The concatenated tuple: ", Tuple)


