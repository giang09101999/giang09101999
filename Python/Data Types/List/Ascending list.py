elements = input("Input elements: ")

List = list(map(int, elements.split()))
print("The origianal list:", List)

List.sort()
print("The ascending list: ", List)
