def Swap(a, b):
    c = a
    a = b
    b = c

    print("The value of a after swaping:", a)
    print("The value of b after swaping:", b)


a = int(input("Input a: "))
b = int(input("Input b: "))

Swap(a, b)