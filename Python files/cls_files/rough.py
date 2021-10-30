class Car:
    def input(self):
        self.a=input("Enter the details")
        print(self.a)
class Petrol(Car):
    def input(self):
        self.b=input("Enter the capacity in litres")
        print(self.b)

class Electric(Car):
    def input(self):
        self.c=input("Enter the capacity in kilowatts")
        print(self.c)

class Hybrid(Petrol,Electric):
    def input(self):
        self.d=input("Enter the capacity in litres and kilowatts")
        print(self.d)