class Bike:
    def __init__ (self, name = ''):
        self.name = name
    gear = 0
    speed = 0
    def giveSpeed(self, gear = 0, speed = 0):
        self.gear = gear
        self.speed = speed
    def status(self):
        print(f'{self.name} is running at speed {self.speed} km/h in gear {self.gear}.')

if __name__ == '__main__':
    b = Bike("Hero")
    b.giveSpeed(50,3)
    b.status()
    print("Hi")