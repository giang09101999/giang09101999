List = []

n = int(input("Input number of element in a list: "))

for i in range(n):
    element = int(input("List[" + str(i) + "] = "))
    List.append(element)

print("The size of list:", len(List))
