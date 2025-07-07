# overridding 

class Shape:
    def __init__(self, name):
        self.name = name
    def area(self):
        pass
    def fact(self):
        print("I am a 2-d shape.")
    def __str__(self):
        return self.name

class Square(Shape):
    def __init__(self, length):
        super().__init__('Square')
        self.length = length
    def area(self):     # overrides the superclass method
        return (self.length * self.length)
    def fact(self):
        print("I am a Squere.")
    

class Circle(Shape):
    def __init__(self, radius):
        super().__init__('Circle')
        self.radius = radius
    def area(self):     # overide the superclass method
        # super().fact()
        # self.fact()
        return (3.14 * self.radius**2)

if __name__ == '__main__':
    s = Square(7)
    c = Circle(7)
    print(s)
    print(s.area())
    s.fact()    # square class mehtod is execute.

    print(c)
    print(c.area())
    c.fact()        # supr class method is execute



# over loading in next file.
