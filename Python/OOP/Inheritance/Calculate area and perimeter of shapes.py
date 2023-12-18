class Shape:
    def __init__(self):
        self.radius = float(input("Input radius: "))
        self.edge = float(input("Input edge: "))
        self.width = float(input("Input width: "))
        self.length = float(input("Input length: "))

class Area(Shape):
    def Circle_area(self):
        self.cirlce_area = (self.radius)*(self.radius)*(3.14)  
        print("The area of circle is:", self.cirlce_area)
    
    def Square_area(self):
        self.square_area = (self.edge)*(self.edge)  
        print("The area of square is:", self.square_area)    

    def Rectangle_area(self):
        self.rectangle_area = (self.width)*(self.length)  
        print("The area of rectangle is:", self.rectangle_area) 

class Perimeter(Shape):
    def Circle_perimeter(self):
        self.circle_perimeter = 2*(3.14)*(self.radius)
        print("The perimeter of circle is:", self.circle_perimeter)

    def Square_perimeter(self):
        self.square_perimeter = 4*(self.edge)
        print("The perimeter of square is:", self.square_perimeter)

    def Rectangle_perimeter(self):
        self.rectangle_perimeter = 2*(self.width + self.length)
        print("The perimeter of rectangle is:", self.rectangle_perimeter)

print("Input parameters of shapes to calculate area:")
area = Area()
print("-------------------------")
print("Input parameters of shapes to calculate perimeter:")
perimeter = Perimeter()
print("The area of shape: ")
area.Circle_area()
area.Square_area()
area.Rectangle_area()

print("-------------------------")
print("The perimeter of shapes: ")
perimeter.Circle_perimeter()
perimeter.Square_perimeter()
perimeter.Rectangle_perimeter()

