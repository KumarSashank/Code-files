import mysql.connector

k = 1
try:
    con = mysql.connector.connect(
        host="localhost", user="root", password="Kumar@2003", database="employees")
    if con.is_connected():
        print("\nConnection established successfully!")
    mycursor = con.cursor()
except:
    print("Invalid password!!")
    k = 0
try:
    mycursor.execute(
        "CREATE VIEW salary_view AS SELECT employees.emp_no,employees.first_name, salaries.salary FROM (employees INNER JOIN salaries on employees.emp_no=salaries.emp_no)")
    for i in mycursor:
        print(i)
    print('Salary view created successfully')
except:
    if (k == 0):
        print("exit!")
    else:
        print("\nView already exits!!\n")
