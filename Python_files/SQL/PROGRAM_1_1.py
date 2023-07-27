import mysql.connector
print("-------Welcome-------")
k = 1
try:
    con = mysql.connector.connect(
        host="localhost", user="root", password="Kumar@2003", database="employees")
    if con.is_connected():
        print("\nConnection established successfully!\n")
    mycursor = con.cursor()
except:
    print("Invalid password!!")
    k = 0
try:
    mycursor.execute("CREATE VIEW emp_view AS SELECT emp_no,first_name,last_name,hire_date FROM employees")
    for i in mycursor:
        print(i)
        print()
except:
    if (k == 0):
        print("exit!")
    else:
        print("\nView already exits!!\n")
