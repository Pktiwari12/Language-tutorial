class Person:
    name = ''
    def info(self):
        print(f'The name of the person is  = {self.name}')
    def hi(self):
        print(f'Hi from the Person class')

class Indian(Person):
    cit_no = 0
    def info2(self):
        print(f'The cit_no of {self.name} = \t {self.cit_no}')
    def hi(self):
        print("Hi from the indian Class.")
class Student(Indian):
    roll_no = 0
    def info3(self):
        print(f'the student roll no =\t{self.roll_no}')

if __name__ == '__main__':
    s = Student()
    s.name = "Pradeep"
    s.cit_no = 123456
    s.roll_no = 123
    s.info()
    s.info2()
    s.info3()
    s.hi()
