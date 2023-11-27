input_original_elements = input("Input elements: ")
input_new_elements = input("Add new elements into set: ")

Original_set = set(map(int, input_original_elements.split()))
New_elements_set = set(map(int, input_new_elements.split()))


print("The original set:", Original_set)
Original_set.update(New_elements_set)


print("The updated set:", Original_set)
