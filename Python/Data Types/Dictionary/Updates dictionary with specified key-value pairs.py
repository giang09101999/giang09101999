import sys
Dictionary = {}

Dictionary_2 = {}

print("1. Key: String; Value: String")
print("2. Key: Integer; Value: Integer")
print("3. Key: String; Value: Integer")
print("4. Key: Integer; Value: String")

mode = int(input("Input mode: "))

if ((mode < 1)|(mode > 4)):
    print("Error!!")
    sys.exit()

n = int(input("Input number of key-value pairs: "))

if mode == 1:
    for i in range(n):
        key = input("Input key: ")
        value = input("Input value: ")
        Dictionary[key] = value
   
elif mode == 2:
    for i in range(n):
        key = int(input("Input key: "))
        value = int(input("Input value: "))
        Dictionary[key] = value
        
elif mode == 3:
    for i in range(n):
        key = input("Input key: ")
        value = int(input("Input value: "))
        Dictionary[key] = value
        
elif mode == 4:
    for i in range(n):
        key = int(input("Input key: "))
        value = input("Input value: ")
        Dictionary[key] = value      

else:
    print("Error!!")
    
print("1. Key: String; Value: String")
print("2. Key: Integer; Value: Integer")
print("3. Key: String; Value: Integer")
print("4. Key: Integer; Value: String")

mode_2 = int(input("Input mode for new dictionary: "))

if ((mode_2 < 1)|(mode_2 > 4)):
    print("Error!!")
    sys.exit()
    
n2 = int(input("Input number of key-value pairs to add to the original dictionary: "))

if mode_2 == 1:
    for i in range(n2):
        key = input("Input key: ")
        value = input("Input value: ")
        Dictionary[key] = value
   
elif mode_2 == 2:
    for i in range(n2):
        key = int(input("Input key: "))
        value = int(input("Input value: "))
        Dictionary[key] = value
        
elif mode_2 == 3:
    for i in range(n2):
        key = input("Input key: ")
        value = int(input("Input value: "))
        Dictionary[key] = value
        
elif mode_2 == 4:
    for i in range(n2):
        key = int(input("Input key: "))
        value = input("Input value: ")
        Dictionary[key] = value      

else:
    print("Error!!")
    
print("The original dictionary: ", Dictionary)
Dictionary.update(Dictionary_2)

print("The updated dictionary: ", Dictionary)
    

