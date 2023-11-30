import sys
Dictionary = {}

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

    input_key = input("Input key for value: ")
    print("The value is: ", Dictionary.get(input_key)) 
 
elif mode == 2:
    for i in range(n):
        key = int(input("Input key: "))
        value = int(input("Input value: "))
        Dictionary[key] = value
    
    input_key = int(input("Input key for value: "))
    print("The value is: ", Dictionary.get(input_key))
        
elif mode == 3:
    for i in range(n):
        key = input("Input key: ")
        value = int(input("Input value: "))
        Dictionary[key] = value

    input_key = input("Input key for value: ")
    print("The value is: ", Dictionary.get(input_key))
        
elif mode == 4:
    for i in range(n):
        key = int(input("Input key: "))
        value = input("Input value: ")
        Dictionary[key] = value      

    input_key = int(input("Input key for value: "))
    print("The value is: ", Dictionary.get(input_key))

else:
    print("Error!!")
    
