Dictionary = {}

print("1. Key: String; Value: String")
print("2. Key: Integer; Value: Integer")
print("3. Key: String; Value: Integer")
print("4. Key: Integer; Value: String")

Mode = int(input("Input mode: "))
n = int(input("Input number of elements in a dictionary: "))

if Mode == 1:
    for i in range(n):
        key = input("Input string key: ")
        value = input("Input string value: ")
        Dictionary[key] = value
          
elif Mode == 2:
    for i in range(n):
        key = int(input("Input integer key: "))
        value = int(input("Input integer value: "))
        Dictionary[key] = value

elif Mode == 3:
    for i in range(n):
        key = input("Input string key: ")
        value = int(input("Input integer value: "))
        Dictionary[key] = value
        
elif Mode == 4:
    for i in range(n):
        key = int(input("Input integer key: "))
        value = input("Input string value: ")
        Dictionary[key] = value
        
else:
    print("Error!!")

print("The original dictionary: ", Dictionary)    
new_dictionary = Dictionary.copy()

print("The copied dictionary: ", new_dictionary)


