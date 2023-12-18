from collections import OrderedDict

od = OrderedDict()

n = int(input("Input number of key-value pairs in a dictionary: "))

for i in range(n):
    key = int(input("Input key: "))
    value = input("Input value: ")
    od[key] = value 

print("The original OrderedDict:", od)
print("------------------------------------------------")
change_key = int(input("Input key you want to change: "))
new_value = input("Input new value: ")

od[change_key] = new_value
print("The updated OrderedDict:", od)