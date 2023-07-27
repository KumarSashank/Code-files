class Car:
    car=None
    speed=None
    price=None
    def __init__(self,name,p,s):
        self.car=name
        self.speed=s
        self.price=p

class Petrol(Car):
    type="petrol"
    capacity = "40ltr"

class Electric(Car):
    type="electric"
    capacity = "180kw"

class Hybrid(Petrol,Electric):
    type="hybrid"

a=Car("Jeep",900000,150)
b=Hybrid()

print(a.vehicle)
print(b.type)
