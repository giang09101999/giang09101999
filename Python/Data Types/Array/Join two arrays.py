import array as arr

Elements_1 = input("Input elements of Array 1: ")
Elements_2 = input("Input elements of Array 2: ")

List_1 = list(map(int, Elements_1.split()))
List_2 = list(map(int, Elements_2.split()))

Array_1 = arr.array("i", List_1)
Array_2 = arr.array("i", List_2)

Array_1.extend(Array_2)

print("The joined array: ", Array_1)

