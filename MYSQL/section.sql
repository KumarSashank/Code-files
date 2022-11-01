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