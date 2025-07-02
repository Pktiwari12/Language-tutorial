class Student:
    # constructor with parameter
    def __init__(self, name = "", rollNo = 0):
        self.name = name
        self.rollNo = rollNo

s1 = Student()
print(s1.name)
print(s1.rollNo)

s2 = Student("Ram", 453)
print(s2.name)
print(s2.rollNo)
    