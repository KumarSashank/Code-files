-- Active: 1668328388409@@127.0.0.1@3306@employees

select
    employees.emp_no,
    first_name,
    last_name,
    gender,
    SUM(salaries.salary) as total_salary
from employees
    inner join salaries on employees.emp_no = salaries.emp_no
group by employees.emp_no
limit 30;

select
    dept_manager.dept_no,
    departments.dept_name,
    dept_manager.emp_no,
    employees.first_name,
    employees.last_name
from dept_manager
    inner join departments on dept_manager.dept_no = departments.dept_no
    inner join employees on dept_manager.emp_no = employees.emp_no;

select
    employees.emp_no,
    first_name,
    last_name,
    departments.dept_name
from employees
    inner join dept_emp on employees.emp_no = dept_emp.emp_no
    inner join departments on dept_emp.dept_no = departments.dept_no
limit 30;

-- //List all employees in the Marketing department, including their employee

-- number, last name, first name, and department name.

select
    employees.emp_no,
    first_name,
    last_name,
    departments.dept_name
from employees
    inner join dept_emp on employees.emp_no = dept_emp.emp_no
    inner join departments on dept_emp.dept_no = departments.dept_no
where
    departments.dept_name = 'Marketing'
limit 30;

-- 8. List all employees in the Marketing and Production departments,

-- including their employee number, last name, first name, and department

-- name.

select
    employees.emp_no,
    first_name,
    last_name,
    departments.dept_name
from employees
    inner join dept_emp on employees.emp_no = dept_emp.emp_no
    inner join departments on dept_emp.dept_no = departments.dept_no
where
    departments.dept_name in ('Marketing', 'Production')
limit 30;

-- 9. Find the unique last names and their frequency count and display in

-- sorted order of last names.

select
    last_name,
    count(last_name) as frequency
from employees
group by last_name
order by last_name
limit 30;

-- 9.List all employees whose first name is “Uri” and last names begin with “L”

select
    employees.emp_no,
    first_name,
    last_name
from employees
where
    first_name = 'Uri'
    and last_name like 'L%'
limit 30;

-- 11. List all employees whose first name is “Pradeep” and last name ends

-- with “i”.

select
    employees.emp_no,
    first_name,
    last_name
from employees
where
    first_name = 'Pradeep'
    and last_name like '%i'
limit 30;

-- 12. List all employees whose last name contains the substring "mey”.

select
    employees.emp_no,
    first_name,
    last_name
from employees
where last_name like '%mey%'
limit 30;

-- 13. List employee number, last name, first name, gender, and salary of

-- employees whose salary is greater than 100000.

select
    employees.emp_no,
    first_name,
    last_name,
    gender,
    salaries.salary
from employees
    inner join salaries on employees.emp_no = salaries.emp_no
where salaries.salary > 100000
limit 30;