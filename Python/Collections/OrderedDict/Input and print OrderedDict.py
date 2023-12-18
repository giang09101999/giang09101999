from collections import OrderedDict
Dict = {}

n1 = int(input("Input number of key-value pairs in a dictionary: "))

for i in range(n1):
    key = int(input("Input key: "))
    value = input("Input value: ")
    Dict[key] = value

print("The dictionary:", Dict)
print("-------------------------------------------------------------------")
od = OrderedDict()

n2 = int(input("Input number of key-value pairs in a ordered dictionary: "))

for i in range(n2):
    key = int(input("Input key: "))
    value = input("Input value: ")
    od[key] = value

print("The ordered dictionary:", od)