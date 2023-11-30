import array as arr

Elements = input("Input elements: ")

List = list(map(int, Elements.split()))

Array = arr.array("i", List)

position = int(input("Input position to insert value: "))
value = int(input("Input value: "))


print("The orignal array: ", Array)
Array.insert(position, value)

print("The updated array: ", Array)