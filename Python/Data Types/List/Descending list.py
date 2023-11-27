elements = input("Input elements: ")

List = list(map(int, elements.split()))
print("The origianal list:", List)

List.sort(reverse = True)
print("The descending list: ", List)
