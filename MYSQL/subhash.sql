-- Active: 1665341479744@@127.0.0.1@3306@srmap

-- Active: 1665341479744@@127.0.0.1@3306@srmap

CREATE TABLE
    classroom (
        Building CHAR(1),
        Room_Number int,
        Capacity int,
        PRIMARY KEY (Building, Room_Number)
    );

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

-- Active: 1665341479744@@127.0.0.1@3306@srmap

CREATE TABLE
    department (
        Department_ID int,
        DEPARTMENT_Name VARCHAR(50),
        Building VARCHAR(50),
        Budget INT,
        PRIMARY KEY (Department_ID)
    );

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

-- Active: 1665341479744@@127.0.0.1@3306@srmap

create table
    section (
        Section_ID int,
        Semester int,
        Year int,
        Instructor_ID int,
        Course_ID int,
        Building CHAR(1),
        Room_Number int,
        PRIMARY KEY (Section_ID, Instructor_ID),
        FOREIGN KEY (Instructor_ID) REFERENCES instructor(Instructor_ID),
        FOREIGN KEY (Course_ID) REFERENCES course(Course_ID),
        FOREIGN KEY (Building, Room_Number) REFERENCES classroom(Building, Room_Number)
    );

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