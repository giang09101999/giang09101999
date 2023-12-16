class Myclass():
    def __init__(self):

        a = int(input("Input value of a: "))
        b = int(input("Input value of b: "))

        self.a = a
        self.b = b
       

obj = Myclass()

print("The value of a is:", obj.a)
print("The value of b is: ", obj.b)
