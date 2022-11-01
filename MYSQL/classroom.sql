-- Active: 1665341479744@@127.0.0.1@3306@srmap

CREATE TABLE
    classroom (
        Building CHAR(1),
        Room_Number int,
        Capacity int,
        PRIMARY KEY (Building, Room_Number)
    );