-- Active: 1665341479744@@127.0.0.1@3306@srmap

CREATE TABLE
    course (
        Course_ID int,
        Course_Name VARCHAR(50),
        Course_Credits int,
        Course_Department_ID int,
        PRIMARY KEY (Course_ID),
        Foreign Key (Course_Department_ID) REFERENCES department(Department_ID)
    );