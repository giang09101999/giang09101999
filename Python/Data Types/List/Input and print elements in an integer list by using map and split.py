n = int(input("Input number of elements in a list: "))

List = list(map(int, input("Enter elements: ").split()))[:n]

print("The list is: ", List)
