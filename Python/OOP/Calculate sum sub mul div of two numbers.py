class Calculate():
    def __init__(self):

        a = int(input("Input value of a: "))
        b = int(input("Input value of b: "))
        
        self.a = a
        self.b = b

    def Sum(self):
        self.Sum = self.a + self.b
        return self.Sum

    def Sub(self):
        self.Sub = self.a - self.b
        return self.Sub

    def Mul(self):
        self.Mul = self.a * self.b
        return self.Mul

    def Division(self):
        self.Divison = (self.a)/(self.b)       
        return self.Divison

result = Calculate()

print("The sum of two numbers is: ", result.Sum())
print("The substract of two numbers is: ", result.Sub())
print("The multiple of two numbers is: ", result.Mul())
print("The division of two numbers is: ", result.Division())


