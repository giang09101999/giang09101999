from collections import Counter

elements = input("Input elements: ")
List = list(map(int, elements.split()))

count = Counter()

elements_2 = input("Input substracted element: ")
Sub_list = list(map(int, elements_2.split()))

c1 = Counter(List)
c2 = Counter(Sub_list)
print("The original c1:", c1)
c1.subtract(c2)

print("The substracted c1:",c1)

