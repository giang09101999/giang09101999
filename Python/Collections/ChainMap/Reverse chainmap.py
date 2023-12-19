from collections import ChainMap

Dict_1 = {}
Dict_2 = {}

n1 = int(input("Input number of key-value pairs of Dictionary 1: "))
n2 = int(input("Input number of key-value pairs of Dictionary 2: "))

print("----------------------------------------")
print("Input keys and values of Dicitonary 1: ")
for i in range(n1):
    key = int(input("Input key: "))
    value = input("Input value: ")
    Dict_1[key] = value

print("----------------------------------------")
print("Input keys and values of Dictionary 2: ")
for i in range(n2):
    key = int(input("Input key: "))
    value = input("Input value: ")
    Dict_2[key] = value

c = ChainMap(Dict_1, Dict_2)
print("---------------------------------------")
print("The chainmap:", c.maps)
c.maps.reverse()
print("The reversed chainmap:", c.maps)