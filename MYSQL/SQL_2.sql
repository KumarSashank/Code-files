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

SELECT
    employees.emp_no,
    first_name,
    last_name
FROM employees
    INNER JOIN salaries ON employees.emp_no = salaries.emp_no
WHERE
    salaries.salary >= 50000
    AND salaries.salary <= 51000
LIMIT 30;

-- 6. Write an SQL query to fetch minimum salary, emp_no, department name who works

-- in the ‘Sales’ department.

SELECT
    MIN(salaries.salary) AS Minimum_Salary,
    employees.emp_no,
    departments.dept_name
FROM employees
    INNER JOIN salaries ON employees.emp_no = salaries.emp_no
    INNER JOIN dept_emp ON employees.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE
    departments.dept_name = 'Sales'
GROUP BY employees.emp_no
limit 30;

-- 7. Write an SQL query to fetch maximum salary, emp_no, department name who works

-- in the ‘Customer Service’ department.

SELECT
    MAX(salaries.salary) AS Maximum_Salary,
    employees.emp_no,
    departments.dept_name
FROM employees
    INNER JOIN salaries ON employees.emp_no = salaries.emp_no
    INNER JOIN dept_emp ON employees.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE
    departments.dept_name = 'Customer Service'
GROUP BY employees.emp_no
limit 30;

-- 8. Write an SQL query to fetch average salary, emp_no, department name who works in

-- the ‘Marketing’ department.

SELECT
    AVG(salaries.salary) AS Average_Salary,
    employees.emp_no,
    departments.dept_name
FROM employees
    INNER JOIN salaries ON employees.emp_no = salaries.emp_no
    INNER JOIN dept_emp ON employees.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE
    departments.dept_name = 'Marketing'
GROUP BY employees.emp_no
limit 30;

-- 9. Write an SQL query to fetch total salary, emp_no, department name who works in the

-- ‘Research’ department.

SELECT
    SUM(salaries.salary) AS Total_Salary,
    employees.emp_no,
    departments.dept_name
FROM employees
    INNER JOIN salaries ON employees.emp_no = salaries.emp_no
    INNER JOIN dept_emp ON employees.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE
    departments.dept_name = 'Research'
GROUP BY employees.emp_no
limit 30;

-- 10. Write an SQL query to fetch total number of employees, department name work in the

-- ‘Production’ department.

SELECT
    COUNT(employees.emp_no) AS Total_Employees,
    departments.dept_name
FROM employees
    INNER JOIN dept_emp ON employees.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE
    departments.dept_name = 'Production'
GROUP BY
    departments.dept_name;

-- 11. Write an SQL query to give 5% raise to the employees who works in the ‘Finance’

-- department and salary is less than 30000.

UPDATE salaries
SET
    salary = salary + (salary * 0.05)
WHERE emp_no IN (
        SELECT
            employees.emp_no
        FROM employees
            INNER JOIN dept_emp ON employees.emp_no = dept_emp.emp_no
            INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
        WHERE
            departments.dept_name = 'Finance'
    )
    AND salary < 30000;

--     12. Write an SQL query to fetch all the employee details who works in both ‘Marketing’

-- and ‘Production’ departments.

SELECT
    employees.emp_no,
    first_name,
    last_name,
    gender,
    hire_date
FROM employees
    INNER JOIN dept_emp ON employees.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE
    departments.dept_name = 'Marketing'
    and departments.dept_name = 'Production'
GROUP BY employees.emp_no
limit 30;

-- 13. Write an SQL query to fetch the 50 employee details randomly who works in the

-- departments that are not in the part of department of ‘d009’or ‘d005’or ‘d002’ or

-- ‘d004’ or ‘d007’. Return emp_no, first_name, last_name, dept_no, dept_name.

SELECT
    employees.emp_no,
    first_name,
    last_name,
    dept_emp.dept_no,
    departments.dept_name
FROM employees
    INNER JOIN dept_emp ON employees.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE
    departments.dept_no NOT IN (
        'd009',
        'd005',
        'd002',
        'd004',
        'd007'
    )
ORDER BY RAND()
LIMIT 50;

-- 14. Write an SQL query to fetch employee details who works in the ‘Sales’ department

-- except those employees whose salary is less than 40000. Return emp_no, dept_no,

-- dept_name, salary.

SELECT
    dept_emp.emp_no,
    dept_emp.dept_no,
    departments.dept_name,
    salaries.salary
from departments
    INNER JOIN dept_emp ON departments.dept_no = dept_emp.dept_no
    INNER JOIN salaries ON dept_emp.emp_no = salaries.emp_no
WHERE
    departments.dept_name = "Sales"
    AND salaries.salary NOT IN(
        SELECT salary
        FROM salaries
        WHERE salary < 40000
    )
GROUP BY salaries.emp_no;

SELECT
    dept_emp.emp_no,
    dept_emp.dept_no,
    departments.dept_name,
    salaries.salary
FROM departments
    INNER JOIN dept_emp ON departments.dept_no = dept_emp.dept_no
    INNER JOIN salaries ON dept_emp.emp_no = salaries.emp_no
WHERE
    departments.dept_name = "Sales"
    AND salaries.salary NOT IN (
        SELECT salary
        FROM salaries
        WHERE salary < 40000
    )
GROUP BY salaries.emp_no;

-- 15. Write an SQL query to fetch all distinct or unique titles and departments. Return title

-- and dept_name.

SELECT
    DISTINCT titles.title,
    departments.dept_name
FROM titles
    INNER JOIN dept_emp ON titles.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no;

--     16. Write an SQL query to fetch the employee details who works in the department

-- ‘Human Resources’ and whose salary is less than 39000 in ascending order. Return

-- emp_no, salary,dept_name.

SELECT
    employees.emp_no,
    salaries.salary,
    departments.dept_name
FROM employees
    INNER JOIN salaries ON employees.emp_no = salaries.emp_no
    INNER JOIN dept_emp ON employees.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE
    departments.dept_name = 'Human Resources'
    AND salaries.salary < 39000
ORDER BY salaries.salary ASC;

-- 17. Write an SQL query to fetch the employee details whose salary is greater than atleast

-- one employee in the ‘Development’ department. Return emp_no, salary, dept_name.

-- (HINT: use SOME operator)

SELECT
    employees.emp_no,
    salaries.salary,
    departments.dept_name
FROM employees
    INNER JOIN salaries ON employees.emp_no = salaries.emp_no
    INNER JOIN dept_emp ON employees.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE
    departments.dept_name = 'Development'
    AND salaries.salary > (
        SELECT salary
        FROM salaries
        WHERE
            salary > salaries.salary
        LIMIT 1
    )
ORDER BY salaries.salary ASC;

SELECT
    salaries.emp_no,
    salaries.salary,
    departments.dept_name
FROM salaries
    INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE salary > SOME (
        SELECT salary
        FROM salaries
            INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
            INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
        WHERE
            departments.dept_name = "Development"
    );

SELECT
    salaries.emp_no,
    salaries.salary,
    departments.dept_name
FROM salaries
    INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE salary < SOME (
        SELECT salary
        FROM salaries
            INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
            INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
        WHERE
            departments.dept_name = "Development"
    );

SELECT
    salaries.emp_no,
    salaries.salary,
    departments.dept_name
FROM salaries
    INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE salary <= SOME (
        SELECT salary
        FROM salaries
            INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
            INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
        WHERE
            departments.dept_name = "Development"
    );

SELECT
    salaries.emp_no,
    salaries.salary,
    departments.dept_name
FROM salaries
    INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE salary >= SOME (
        SELECT salary
        FROM salaries
            INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
            INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
        WHERE
            departments.dept_name = "Development"
    );

SELECT
    salaries.emp_no,
    salaries.salary,
    departments.dept_name
FROM salaries
    INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE salary > ANY (
        SELECT salary
        FROM salaries
            INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
            INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
        WHERE
            departments.dept_name = "Development"
    );

SELECT
    salaries.emp_no,
    salaries.salary,
    departments.dept_name
FROM salaries
    INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
    INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
WHERE salary <> ALL (
        SELECT salary
        FROM salaries
            INNER JOIN dept_emp ON salaries.emp_no = dept_emp.emp_no
            INNER JOIN departments ON dept_emp.dept_no = departments.dept_no
        WHERE
            departments.dept_name = "Development"
    );