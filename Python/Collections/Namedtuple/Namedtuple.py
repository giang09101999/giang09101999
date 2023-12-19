from collections import namedtuple

Student = namedtuple('Student', ['name', 'age', 'place'])

S = Student('Giang', '24', 'Houston')

print("The age using index:", S[1])
print("The age using name: ", S.age)