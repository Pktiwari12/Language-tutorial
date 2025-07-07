class Person:
    name = ''
    def info(self):
        print(f'the name of the person {self.name}')
    def hi(self):
        print("Hi from the Person class")

class Son:
    father_name = ''
    def info2(self):
        print(f'The falther is {self.father_name}')
    def hi(self):
        print("Hi from the Son class.")

class Student(Person, Son):     # derived from two super classes
    roll_no = ''
    def info3(self):
        print(f'The roll no  is {self.roll_no}')

if __name__ == '__main__':
    s = Student()
    s.name = "Pradep"
    s.father_name = "Surendra Tiwari"
    s.roll_no = '123'
    s.info()
    s.info2()
    s.info3()
    # Methon resolution Order in python (MRO) :- left to right
    s.hi()
