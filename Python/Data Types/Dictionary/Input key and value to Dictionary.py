import sys
Dictionary = {}

print("1. Key: String; Value: String")
print("2. Key: Integer; Value: Integer")
print("3. Key: String; Value: Integer")
print("4. Key: Integer; Value: String")

Mode = int(input("Choose mode: "))
if ((Mode < 1) | (Mode > 4)):
    print("Input Error!!")
    sys.exit()

n = int(input("Input number of elements of Dictionary: "))
if mode == 1:
    for i in range(n):
        key = input("Input key: ")
        value = input("Input value: ")
        Dictionary[key] = value
    print("The dictionary:", Dictionary)
    
elif mode == 2:
    for i in range(n):
        key = int(input("Input key: "))
        value = int(input("Input value: "))
        Dictionary[key] = value
    print("The dictionary:", Dictionary)

elif mode == 3:
    for i in range(n):
        key = input("Input key: ")
        value = int(input("Input value: "))
        Dictionary[key] = value
    print("The dictionary:", Dictionary)
    
elif mode == 4:
    for i in range(n):
        key = int(input("Input key: "))
        value = input("Input value: ")
        Dictionary[key] = value
    print("The dictionary:", Dictionary)
    
else:
    print("Error!!")
