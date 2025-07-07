class Person:
    name = ''
    def detail(self):
        print(f'{self.name} is a Person.')


class Student(Person):
    roll_no = 0
    def stu_det(self):
        print(f'{self.name} is a student with roll no {self.roll_no}')

s1 = Student()
s1.name = "Ram"
s1.roll_no = 123
s1.detail()
s1.stu_det()