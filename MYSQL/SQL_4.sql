-- Active: 1668328388409@@127.0.0.1@3306

-- When inserting a new record to an employees table, modify the last_name from

-- ‘Simmel’ to ‘Kelvin’. (use before insert trigger)

-- Create a trigger

CREATE TRIGGER `EMPLOYEES_BEFORE_INSERT` BEFORE INSERT 
ON `EMPLOYEES` FOR EACH ROW BEGIN 
	SET NEW.last_name = 'Kelvin';
END; 

-- Update the salary of an employee to 41000 whose employee emp_no=100002 and

-- salary is 39000. (use after update trigger)

-- Create a trigger

CREATE TRIGGER `SALARIES_AFTER_UPDATE` AFTER UPDATE 
ON `SALARIES` FOR EACH ROW BEGIN 
	IF NEW.salary = 39000 THEN SET NEW.salary = 41000;
	END IF;
END; 

-- Delete the rows of an employee whose emp_no=100005 from salaries table and store

-- the deleted tables into a new salary_deleted_rows table. ( note: columns (id, emp_no,

-- salary, from_date, to_date, deleted_at_time) (Use: before delete trigger)

-- Create a trigger

CREATE TRIGGER `SALARIES_BEFORE_DELETE` BEFORE DELETE 
ON `SALARIES` FOR EACH ROW BEGIN 
	INSERT INTO
	    salary_deleted_rows (
	        id,
	        emp_no,
	        salary,
	        from_date,
	        to_date,
	        deleted_at_time
	    )
	VALUES (
	        OLD.id,
	        OLD.emp_no,
	        OLD.salary,
	        OLD.from_date,
	        OLD.to_date,
	        NOW()
	    );
END; 