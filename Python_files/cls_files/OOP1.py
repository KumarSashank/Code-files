class student:
    total=0
    name=""
    def __init__(self,id,name,mid1_marks,mid2_marks,quiz):
        total = mid1_marks+mid2_marks+quiz
        if total >=80:
            ch='A'
        elif total<80 and total>=60:
            ch='B'
        elif total>=50 and total<60:
            ch='C'
        print("Roll Number: ",id)
        print("Name: ",name)
        print("MID1: ",mid1_marks)
        print("MID2: ",mid2_marks)
        print("Quiz: ",quiz)
        print("Total: ",total)
        print("Result : ",ch)


id=input("Enter roll number : ")
name=input("Enter name : ")
mid1_marks=int(input("Enter mid_1 marks : "))
mid2_marks=int(input("Enter mid_2 marks : "))
quiz=int(input("Enter quiz marks : "))
obj=student(id,name,mid1_marks,mid2_marks,quiz)


