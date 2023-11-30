import sys

try:
    Dictionary = {}

    print("1. Key: String; Value: String")
    print("2. Key: Integer; Value: Integer")
    print("3. Key: String; Value: Integer")
    print("4. Key: Integer; Value: String")

    Mode = int(input("Choose mode: "))

    if (Mode < 1)|(Mode > 4):
        sys.exit()
    
    if Mode == 1:
        n = int(input("Input number of elements of Dictionary: "))
        for i in range(n):
            key = input("Input key: ")
            value = input("Input value: ")
            Dictionary[key] = value      
    
    if Mode == 2:
        n = int(input("Input number of elements of Dictionary: "))
        for i in range(n):
            key = int(input("Input key: "))
            value = int(input("Input value: "))
            Dictionary[key] = value

    if Mode == 3:
        n = int(input("Input number of elements of Dictionary: "))
        for i in range(n):
            key = input("Input key: ")
            value = int(input("Input value: "))
            Dictionary[key] = value
        
    if Mode == 4:
        n = int(input("Input number of elements of Dictionary: "))
        for i in range(n):
            key = int(input("Input key: "))
            value = input("Input value: ")
            Dictionary[key] = value
    print("The dictionary:", Dictionary)   
    
except:
    print("There are some errors: ")
    print("1. Input wrong datatype of key")
    print("2. Input wrong datatype of value")
    print("3. Input wrong datatype of mode")
    print("4. Input wrong mode")

else:
    print("Run successfully!!")
    

    