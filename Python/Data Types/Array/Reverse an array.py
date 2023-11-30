import array as arr

Elements = input("Input elements: ")
List = list(map(int, Elements.split()))

Array = arr.array("i", List)

print("The original array: ", Array)
Array.reverse()

print("The array after reversing: ", Array)
