class Manager:
    def __init__(self, Salary, Experiencce):
        self.salary = Salary
        self.experience = Experiencce
    def Display_manager_information(self):
        print("The salary:", self.salary)
        print("The experience:", self.experience)

class Senior(Manager):
    def manager_information(self):
        print("The salary of manager: ", self.salary)
        print("The experience of manager: ", self.experience)
    def Display_senior_information(self):
        print("The salary:", self.salary)
        print("The experience:", self.experience)

manager_number = int(input("Input number of manager: "))
manager_list = []

senior_number = int(input("Input number of senior: "))
senior_list = []

print("----------------------------------")

for i in range(manager_number):
    print("Input information of the " + str(i + 1) + "st manager: ")
    salary = int(input("Input salary: "))
    experiencce = int(input("Input experience: "))
    manager_list.append(Manager(salary, experiencce))
print("----------------------------------")
for i in range(senior_number):
    print("Input information of the " + str(i + 1) + "st senior: ")
    salary = int(input("Input salary: "))
    experiencce = int(input("Input experience: "))
    senior_list.append(Senior(salary, experiencce))

print("=================================")
for i in range(manager_number):
    print("The information of the " + str(i + 1) + "st manager is: ")
    manager_list[i].Display_manager_information()
print("---------------------------------")
for i in range(senior_number):
    print("The information of the " + str(i + 1) + "st senior is: ")
    senior_list[i].Display_senior_information()