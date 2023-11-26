#Convert a list to a string

List = []
n = int(input("Input number of elements in a list: "))

for i in range(n):
    element = input("List[" + str(i) + "] =  ")
    List.append(element)

print("The original list: ", List)

string = ' '.join(List)
print("The string: ", string)
