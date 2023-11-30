import array as arr

Elements = input("Input elements: ")
List = list(map(int, Elements.split()))

Array = arr.array("i", List)

value = int(input("Input an element to the end of array: "))
Array.append(value)

print(Array)
