elements = input("Input elements: ")

List = list(map(int, elements.split()))
Tuple = tuple(List)

index = int(input("Input index: "))
value = Tuple[index]

print("The value at " + str(index) + " is: " + str(value))
