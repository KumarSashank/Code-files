class student:
    total=0
    name_student=""
    student_id=None

    __mid1_marks=0
    __mid2_marks=None
    __quiz=0
    __ch=None
    __total=None

    def __init__(self,id,name,mid1_marks,mid2_marks,quiz):
        self.__mid1_marks=mid1_marks
        self.__mid2_marks=mid2_marks
        self.__quiz=quiz
        self.name_student=name
        self.student_id=id
        self.__total = self.__mid1_marks+self.__mid2_marks+self.__quiz
        if self.__total >=80:
            self.__ch='A'
        elif self.__total<80 and self.__total>=60:
            self.__ch='B'
        elif self.__total>=50 and self.__total<60:
            self.__ch='C'
    
    def __display(self):
        print("Roll Number: ",self.student_id)
        print("Name: ",self.name_student)
        print("MID1: ",self.__mid1_marks)
        print("MID2: ",self.__mid2_marks)
        print("Quiz: ",self.__quiz)
        print("Total: ",self.__total)
        print("Result : ",self.__ch)

    def encap(self):
        self.__display()


id=input("Enter roll number : ")
name=input("Enter name : ")
mid1_marks=int(input("Enter mid_1 marks : "))
mid2_marks=int(input("Enter mid_2 marks : "))
quiz=int(input("Enter quiz marks : "))
obj=student(id,name,mid1_marks,mid2_marks,quiz)
obj.encap()


