-- Active: 1668328388409@@127.0.0.1@3306@employees

-- 1. Write an SQL query to fetch all the dept_no which are present in either of the tables

-- ‘departments’ and ‘dept_manager’.

SELECT dept_no
FROM departments
UNION
SELECT dept_no
FROM dept_manager;

-- 2. Write an SQL query to fetch common records between dept_emp and dept_manager

-- tables.

SELECT *
FROM dept_emp
    INNER JOIN dept_manager ON dept_emp.emp_no = dept_manager.emp_no;

--     3. Write an SQL query to fetch top 30 records containing emp_no, first_name,

-- last_name who works in the department other than ‘Customer Service’.

SELECT
    employees.emp_no,
    first_name,
    last_name
FROM employees
    inner join dept_emp on employees.emp_no = dept_emp.emp_no
    inner join departments on dept_emp.dept_no = departments.dept_no
WHERE
    departments.dept_name != 'Customer Service'
LIMIT 30;

-- 4. Write an SQL query to fetch top 15 records uppercase the first name of the employee

-- and lowercase the last name of the employee.

SELECT
    emp_no,
    UPPER(first_name) AS First_Name,
    LOWER(last_name) AS Last_Name
FROM employees
LIMIT 15;

-- 5. Write an SQL query to fetch top 30 employee emp_no, first name, last name having a

-- salary greater than or equal to 50000 and less than or equal to 51000.