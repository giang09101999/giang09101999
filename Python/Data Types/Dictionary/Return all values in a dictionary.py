import sys

Dictionary = {}

print("1. Key: String; Value: String")
print("2. Key: Integer; Value: Integer")
print("3. Key: String; Value: Integer")
print("4. Key: Integer; Value: String")

Mode = int(input("Input mode: "))

if((Mode < 1)|(Mode > 4)):
    print("Input Error!!")
    sys.exit()
    
n = int(input("Input number of key-value pairs in dictionary: "))

if Mode == 1:
    for i in range(n):
        key = input("Input key: ")
        value = input("Input value: ")
        Dictionary[key] = value
        
elif Mode == 2:
    for i in range(n):
        key = int(input("Input key: "))
        value = int(input("Input value: "))
        Dictionary[key] = value

elif Mode == 3:
    for i in range(n):
        key = input("Input key: ")
        value = int(input("Input value: "))
        Dictionary[key] = value

elif Mode == 4:
    for i in range(n):
        key = int(input("Input key: "))
        value = input("Input value: ")
        Dictionary[key] = value

else:
    print("Error!!")

print("The original dictionary:", Dictionary)
value = Dictionary.values()
print("Value in dictionary:", value)