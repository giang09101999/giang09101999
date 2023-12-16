class Student():
    def __init__(self, Name, Age):
        self.name = Name
        self.age = Age 
    

n = int(input("Input number of students: "))
student = []

for i in range(n):
    name = input("Input name of the " + str(i + 1) + "st student: ")
    age = int(input("Input age of the " + str(i + 1) + "st student: "))
    student.append(Student(name, age))

print("------------------------------------------------\n")
for i in range(n):
    print("The information of the " + str(i + 1) + "st student is: ")
    print("Name: ", student[i].name)
    print("Age: ", student[i].age)

