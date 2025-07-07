class Room:
    len = 0
    width = 0
    def cal_area(self):     # note that every method in class , takes one parameter always which is self.
        return (self.len * self.width)

r1 = Room()
r1.len = 10
r1.width = 10
print(f'Area of the room = {r1.cal_area()}')

    