class student:
    id = 20110010243
    name = "Saikoushik"
    mid1_marks = 25
    mid2_marks = 25
    quiz_marks = 50
    sum = 0

    def markList(self):
        print("ROLL NUMBER:", self.id)
        print("NAME:", self.name)
        print("MID1: ", self.mid1_marks)
        print("MID2: ", self.mid2_marks)
        print("QUIZ:", self.quiz_marks)
        self.sum = self.mid1_marks+self.mid2_marks+self.quiz_marks
        print("TOTAL:", self.sum)
        if self.sum >= 80:
            print("RESULT: A GRADE")
        elif self.sum < 80 and self.sum >= 60:
            print("RESULT: B GRADE")
        elif self.sum >= 50 and self.sum < 60:
            print("RESULT: C GRADE")


obj = student()
obj.markList()