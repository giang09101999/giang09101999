import array as arr

Elements = input("Input elements: ")
List = list(map(int, Elements.split()))

Array = arr.array("i", List)

position = int(input("Input position you want to remove: "))

print("The original array: ", Array)

Array.remove(position)

print("The array after removing element: ", Array)

