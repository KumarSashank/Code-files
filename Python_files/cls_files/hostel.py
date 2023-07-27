class Room:
    seating_capacity=0
    name=[]
    rent=0
    def input(self):
        self.seating_capacity=int(input("Enter seating capacity : "))
        for i in range(self.seating_capacity):
            self.name.append(input("Enter name : "))
    def rent(self):
        if self.seating_capacity==1:
            rent=10000
            rent=rent*12
            print("Rent annualy is ",rent)
        elif self.seating_capacity==2:
            rent=8000
            rent=rent*12
            print("Rent annualy is ",rent)
        elif self.seating_capacity==3:
            rent=6000
            rent=rent*12
            print("Rent annualy is ",rent)

obj=Room()
obj.input()
obj.rent()