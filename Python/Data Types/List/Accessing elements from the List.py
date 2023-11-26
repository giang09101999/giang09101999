List = []

n = int(input("Input number of elements in a list: "))

for i in range(n):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

index = int(input("Input index in a list: "))

print("The value at " + str(index) + " is:", List[index])
