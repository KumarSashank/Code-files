-- Active: 1668328388409@@127.0.0.1@3306@employees

-- Start a transaction

START TRANSACTION;

-- Create a table

CREATE TABLE
    `employees` (
        `emp_no` int(11) NOT NULL,
        `birth_date` date NOT NULL,
        `first_name` varchar(14) NOT NULL,
        `last_name` varchar(16) NOT NULL,
        `gender` enum('M', 'F') NOT NULL,
        `hire_date` date NOT NULL,
        PRIMARY KEY (`emp_no`)
    ) ENGINE = InnoDB DEFAULT CHARSET = latin1;