from collections import Counter
elements = input("Input elements: ")

List = list(map(int, elements.split()))

print(Counter(List))

