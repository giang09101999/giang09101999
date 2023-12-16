class Student():
    def __init__(self) -> None:
        self.math = float(input("Input math score: "))
        self.physics = float(input("Input physics score: "))
        self.chemistry = float(input("Input chemistry score: "))

    def result(self):
        self.average = (self.math + self.physics + self.chemistry)/3
        if self.average >= 8.0:
            print("Excellent!!")
        elif (self.average >= 6.5) & (self.average < 8.0):
            print("Good!!")
        elif (self.average >= 5) & (self.average < 6.5):
            print("Average!!")
        elif (self.average < 5) & (self.average > 0):
            print("Bad!!")
        else:
            print("Input error!!")
            
student = Student()

student.result()
