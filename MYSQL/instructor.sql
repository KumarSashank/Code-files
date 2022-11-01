-- Active: 1665341479744@@127.0.0.1@3306@srmap

CREATE TABLE
    instructor (
        Instructor_ID int,
        Instructor_Name VARCHAR(50),
        Instructor_Department_ID int,
        Salary int,
        PRIMARY KEY (Instructor_ID),
        Foreign Key (Instructor_Department_ID) REFERENCES department(Department_ID)
    );