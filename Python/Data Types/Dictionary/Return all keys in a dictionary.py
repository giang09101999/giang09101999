import sys

try:
    Dictionary = {}

    print("1. Key: String; Value: String")
    print("2. Key: Integer; Value: Integer")
    print("3. Key: String; Value: Integer")
    print("4. Key: Integer; Value: String")

    Mode = int(input("Input mode: "))

    if ((Mode < 1) | (Mode > 4)):
        print("Input Error!!")
        sys.exit()
        
    n = int(input("Input number of key-value pairs in dictionary: "))

    if Mode == 1:
        for i in range(n):
            key = input("Input key: ")
            value = input("Input value: ")
            Dictionary[key] = value

    if Mode == 2:
        for i in range(n):
            key = int(input("Input key: "))
            value = int(input("Input value: "))
            Dictionary[key] = value
            
    if Mode == 3:
        for i in range(n):
            key = input("Input key: ")
            value = int(input("Input value: "))
            Dictionary[key] = value
            
    if Mode == 4:
        for i in range(n):
            key = int(input("Input key: "))
            value = input("Input value: ")
            Dictionary[key] = value

    print("The original dictionary: ", Dictionary)
    key = Dictionary.keys()    
    print("Key in dictionary: ", key)
    
except:
    print("There are some errors: ")
    print("1. Input wrong key")
    print("2. Input wrong value")
    print("3. Input wrong mode")
    
else:
    print("Run successfully!!")
