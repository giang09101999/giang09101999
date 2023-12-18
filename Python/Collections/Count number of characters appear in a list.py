from collections import Counter
elements = input("Input elements: ")

List = list(map(str, elements.split()))

print(Counter(List))
