import sys

try:
    Dictionary = {}
    New_dictionary = {}

    print("1. Key: String; Value: String")
    print("2. Key: Integer; Value: Integer")
    print("3. Key: String; Value: Integer")
    print("4. Key: Integer; Value: String")

    Mode = int(input("Input mode: "))
    if ((Mode < 1) | (Mode > 4)):
        print("Input Error!!")
        sys.exit()
        
    n = int(input("Input number of elements in a dictionary: "))

    if Mode == 1:
        for i in range(n):
            key = input("Input string key: ")
            value = input("Input string value: ")
            Dictionary[key] = value
              
    if Mode == 2:
        for i in range(n):
            key = int(input("Input integer key: "))
            value = int(input("Input integer value: "))
            Dictionary[key] = value

    if Mode == 3:
        for i in range(n):
            key = input("Input string key: ")
            value = int(input("Input integer value: "))
            Dictionary[key] = value
        
    if Mode == 4:
        for i in range(n):
            key = int(input("Input integer key: "))
            value = input("Input string value: ")
            Dictionary[key] = value
            
    print("The original dicitonary:", Dictionary)
    New_dictionary = Dictionary.copy()
    print("The copied dicitonary:", New_dictionary)
        
except:
    print("There are some errors: ")
    print("1. Input wrong datatype of key")
    print("2. Input wrong datatype of value")
    print("3. Input wrong datatype of mode")
    print("4. Input wrong mode")

else:
    print("Run successfully!!")


