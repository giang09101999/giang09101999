from collections import Counter
elements = input("Input elements: ")

List = list(map(int, elements.split()))

count = Counter ()
update_elements = input("Add elements: ")
Update_list = list(map(int, update_elements.split()))

count = Counter()

count.update(List)
print(count)

count.update(Update_list)
print(count)

