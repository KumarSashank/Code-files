-- Active: 1668328388409@@127.0.0.1@3306@employees

-- Q1

select first_name, salary
from employees
    inner join salaries on employees.emp_no = salaries.emp_no
where
    hire_date = '1989-05-23'
    AND salary < ALL(
        select salary
        from salaries
    );

-- Q2

update salaries
set
    salary = salary + (salary * 0.1)
    INNER JOIN employees ON salaries.emp_no = employees.emp_no
where
    employees.gender = 'F'
    AND employees.first_name = 'Hisao'
    AND employees.last_name = 'Himler';

update salaries set salaries.salary = salary + (salary * 0.1);

select
    first_name,
    last_name,
    salary
from employees
    inner join salaries on salaries.emp_no = employees.emp_no
where
    gender = 'F'
    and first_name = 'Hisao'
    and last_name = 'Himler';

-- Q3

select dept_no,dept_name from departments where dept_name like 'R%';

-- Q4

-- write an SQL query to increase the salary by 10% to the employees whose gender is 'F' and first name is 'Hisao' and last name is 'Himler'

update salaries
set
    salary = salary + (salary * 10 / 100)
    INNER JOIN employees ON salaries.emp_no = employees.emp_no
where
    employees.gender = 'F'
    AND employees.first_name = 'Hisao'
    AND employees.last_name = 'Himler';

-- Q5

update employees
set first_name = 'Himler'
where
    first_name = 'Hisao'
    AND last_name = 'Himler';