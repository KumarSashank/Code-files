-- Active: 1668328388409@@127.0.0.1@3306@employees

-- 1. When inserting a new record to an employees table, modify the last_name from

-- ‘Simmel’ to ‘Kelvin’. (use before insert trigger)

CREATE TRIGGER `BEFORE_INSERT` BEFORE INSERT ON `EMPLOYEES` 
FOR EACH ROW BEGIN 
	IF NEW.last_name = 'Simmel' THEN SET NEW.last_name = 'Kelvin';
	END IF;
END; 

insert into employees
values (
        '500005',
        '2003-08-05',
        'Rathod',
        'Simmel',
        'M',
        '2024-07-03'
    );

select * from employees where emp_no = '500005';

-- 2. Update the salary of an employee to 41000 whose employee emp_no=100002 and salary is 39000. (use after update trigger)

create table
    salary_changes(
        emp_no int,
        before_salary int,
        after_salary int
    );

CREATE TRIGGER SALARY_CHANGE_TRIGGER 
	after
	update
	    on salaries for each row if old.salary <> new.salary then
	insert into salary_changes
	values (
	        '1',
	        old.emp_no,
	        old.salary,
	        new.salary
	    );
END; 

update salaries
set salary = 41000
where
    emp_no = 100002
    and salary = 39000 / /;

select * from salary_changes where emp_no=100002;

-- ipudu VIVA

create table
    salary_deleted_rows(
        emp_no int,
        salary int,
        from_date varchar(20),
        to_date varchar(20),
        deleted_at_time varchar(20)
    );

delimiter ;

CREATE TRIGGER SAL_DELETE 
	before
	delete on salaries for each row
	insert into
	    salary_deleted_rows(
	        emp_no,
	        salary,
	        from_date,
	        to_date
	    ) ->
	values (
	        old.emp_no,
	        old.salary,
	        old.from_date,
	        old.to_date
	    );


delimiter ; 

delete from salaries where emp_no=100005;

select * from salary_deleted_rows;

-> begin -> declare done int default false;

-> declare id int(11);

-> declare fn varchar(14);

-> declare ln varchar(16);

-> declare bdate date;

-> declare mycursor cursor -> for ->
select
    emp_no,
    first_name,
    last_name,
    birth_date ->
from employees ->
where
    month(birth_date) = month(current_date) ->
    and day(birth_date) = day(current_date);

-> declare continue handler for not found set done = true;

-> open mycursor;

-> fetch_loop: loop -> fetch mycursor into id,fn,ln,bdate;

-> if done then -> leave fetch_loop;

-> end if;

-> select id,fn,ln,bdate;

-> end loop;

-> close mycursor;

-> end;

call mycursor;