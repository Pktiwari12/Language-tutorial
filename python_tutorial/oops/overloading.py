# Python does not suppor the overloading like C++, java. There are alternative option from which this comcept is achieved.
# Try to explore these one (default arguement, variable arguremnt, etc)

class Student:
    def __init__(self, name, roll_no):
        self.name = name
        self.roll_no = roll_no

    def info(self, address): # overides the previous option.
        print(f'the name of the student = \t {self.name}. and his address is {address}')
    def info(self, father , mother):
        print(f'father name = \t {father}\n mother name =\t {mother}')

if __name__ == '__main__':
    s = Student("Pradeep", 123)
    s.info("Indranagar")
    s.info('Surendera', 'Seema') 