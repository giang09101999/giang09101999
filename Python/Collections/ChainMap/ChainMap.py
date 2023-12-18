from collections import ChainMap

Dict_1 = {1: "a", 2:"b", 3:"c"}
Dict_2 = {3: "d", 4:"e", 5:"f"}
Dict_3 = {6: "g", 7:"h", 8:"i"}

c = ChainMap(Dict_1, Dict_2, Dict_3)

print(type(c))
print(c)