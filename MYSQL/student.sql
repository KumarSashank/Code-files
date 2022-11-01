-- Active: 1665341479744@@127.0.0.1@3306@srmap

CREATE TABLE
    student (
        Student_ID VARCHAR(50),
        Student_Name VARCHAR(50),
        Student_GPA INT,
        Student_Department int,
        Student_Instructor_ID int,
        PRIMARY KEY (Student_ID),
        Foreign Key (Student_Department) REFERENCES department(Department_ID),
        Foreign Key (Student_Instructor_ID) REFERENCES instructor(Instructor_ID)
    );