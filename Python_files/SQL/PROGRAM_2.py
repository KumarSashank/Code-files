import mysql.connector
print("-----SQL------")
authentication=True
print("\n")
print("USER X")
print("Enter password : ")
passwd = input()
try:
	con = mysql.connector.connect(
		host="localhost", user='X', password=passwd, database="employees")
	if con.is_connected():
		print("\nConnection established successfully!\n")
	mycursor = con.cursor()
except:
	authentication=False
	print("Invalid password!!")	

while authentication==True:
    print("\nOperations are to be performed\n")
    print("1.Get the substrings of the last_name which contains cel\n")
    print("2.Fetch all the rows of the Finance Department \n")
    print("3.Find employee details...\n")
    print("4.Change the last_name of the employee \n")
    print("5.Exit \n")
    print("Enter a choice : ")
    arg = int(input())
    match arg:
        case 1:
            print("Enter the substring : ")
            ar = str(input())
            mycursor.execute(
                " SELECT * FROM emp_view where last_name like'%{}%' limit 10000 ".format(ar))
            for i in mycursor:
                print(i)
        case 2:
            try:
                ar1 = "Finance"
                mycursor.execute(
                    "select * from emp_view where dept_name like'%{}%' limit 10000 ".format(ar1))
                for j in mycursor:
                    print(j)
            except:
                print("+---------------------+")
                print("\nNo such data exists!")
                print("+---------------------+\n")
        case 3:
            mycursor.execute("select * from emp_view limit 10000")
            for k in mycursor:
                print(k)
        case 4:
            try:
                ar2 = str("Chen")
                print("\n+__________________________________________________+\n")
                print("Before updating...")
                mycursor.execute("select * from emp_view WHERE emp_no=10008")
                for o in mycursor:
                    print(o)
                mycursor.execute(
                    "UPDATE emp_view SET last_name ='%{}%' WHERE emp_no=10008".format(ar2))
                print("Row updated!...\n")
                mycursor.execute("select * from emp_view WHERE emp_no=10008")
                print("+__________________________________________________+\n")
                for l in mycursor:
                    print(l)
            except:
                print("Access denied!!\nX user cannot perform update action!\n")
        case 5: break

        case default:
            print("Error!")