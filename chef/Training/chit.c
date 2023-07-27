#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX_STUDENTS 100
#define MAX_BOOKS 1000
#define MAX_NAME_LEN 100

typedef struct
{
    int id;
    char name[MAX_NAME_LEN];
    char author[MAX_NAME_LEN];
} Book;

typedef struct
{
    int id;
    char name[MAX_NAME_LEN];
    int books_issued;
} Student;

typedef struct
{
    int student_id;
    int book_id;
    time_t date_issued;
} BookIssueRecord;

Book books[MAX_BOOKS];
Student students[MAX_STUDENTS];
BookIssueRecord book_issue_records[MAX_BOOKS];

int books_count = 0;
int students_count = 0;
int book_issue_records_count = 0;

void add_book(int id, char name[], char author[])
{
    books[books_count].id = id;
    strcpy(books[books_count].name, name);
    strcpy(books[books_count].author, author);
    books_count++;
}

void add_student(int id, char name[])
{
    students[students_count].id = id;
    strcpy(students[students_count].name, name);
    students[students_count].books_issued = 0;
    students_count++;
}

void issue_book(int student_id, int book_id)
{
    book_issue_records[book_issue_records_count].student_id = student_id;
    book_issue_records[book_issue_records_count].book_id = book_id;
    book_issue_records[book_issue_records_count].date_issued = time(NULL);
    book_issue_records_count++;

    for (int i = 0; i < students_count; i++)
    {
        if (students[i].id == student_id)
        {
            students[i].books_issued++;
            break;
        }
    }
}

void return_book(int student_id, int book_id)
{
    for (int i = 0; i < book_issue_records_count; i++)
    {
        if (book_issue_records[i].student_id == student_id &&
            book_issue_records[i].book_id == book_id)
        {
            book_issue_records[i].student_id = -1;
            book_issue_records[i].book_id = -1;
            book_issue_records[i].date_issued = 0;
            break;
        }
    }

    for (int i = 0; i < students_count; i++)
    {
        if (students[i].id == student_id)
        {
            students[i].books_issued--;
            break;
        }
    }
}
int is_book_issued(int book_id)
{
    for (int i = 0; i < book_issue_records_count; i++)
    {
        if (book_issue_records[i].book_id == book_id && book_issue_records[i].student_id != -1)
        {
            return 1;
        }
    }
    return 0;
}

int get_student_id_by_book_id(int book_id)
{
    for (int i = 0; i < book_issue_records_count; i++)
    {
        if (book_issue_records[i].book_id == book_id && book_issue_records[i].student_id != -1)
        {
            return book_issue_records[i].student_id;
        }
    }
    return -1;
}

void print_books_issued_to_student(int student_id)
{
    printf("Books issued to student with ID %d:\n", student_id);
    for (int i = 0; i < book_issue_records_count; i++)
    {
        if (book_issue_records[i].student_id == student_id)
        {
            int book_id = book_issue_records[i].book_id;
            for (int j = 0; j < books_count; j++)
            {
                if (books[j].id == book_id)
                {
                    printf("%d. %s by %s\n", book_id, books[j].name, books[j].author);
                }
            }
        }
    }
}

int main()
{
    // Add books
    add_book(1, "Book 1", "Author 1");
    add_book(2, "Book 2", "Author 2");
    add_book(3, "Book 3", "Author 3");
    add_book(4, "Book 4", "Author 4");

    // Add students
    add_student(101, "Student 1");
    add_student(102, "Student 2");
    add_student(103, "Student 3");

    // Issue books
    issue_book(101, 1);
    issue_book(102, 2);
    issue_book(102, 3);
    issue_book(103, 4);

    // Check if book is issued
    int book_id = 2;
    if (is_book_issued(book_id))
    {
        printf("Book with ID %d is issued to student with ID %d\n", book_id, get_student_id_by_book_id(book_id));
    }
    else
    {
        printf("Book with ID %d is not issued\n", book_id);
    }

    // Print books issued to a student
    print_books_issued_to_student(102);

    return 0;
}
