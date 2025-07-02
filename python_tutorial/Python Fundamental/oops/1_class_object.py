class Bike:
    name = ""       # called attribute
    gear = 0
    def runningStatus(self):        # called method
        print(f'{self.name} is running on {self.gear}')

if(__name__ == "__main__"):
    # create object of Bike class
    bike = Bike()
    bike.name = "Hero"
    bike.gear = "4"
    print(bike.name)
    print(bike.gear)
    bike.runningStatus()
