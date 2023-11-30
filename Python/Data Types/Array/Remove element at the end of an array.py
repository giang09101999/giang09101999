import array as arr 

Elements = input("Input elements: ")

List = list(map(int, Elements.split()))

Array = arr.array("i", List)

print("The original array: ", Array)
Array.pop()

print("The array after removing the last element: ", Array)