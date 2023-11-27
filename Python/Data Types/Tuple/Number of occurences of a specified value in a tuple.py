elements = input("Input elements: ")

List = list(map(int, elements.split()))

Tuple = tuple(List)

desired_value = int(input("Input a desired value: "))
count = Tuple.count(desired_value)

print("The original tuple: ", Tuple)
print("The number of occurences of " + str(desired_value) + " in tuple is " + str(count))
