// University library management system with login information

#include <iostream.h>
#include <conio.h>
#include <fstream.h>

class book
{
    char name[20];
    char author[20];
    char publisher[20];
    int price;
    int stock;
    int bookno;

public:
    void getdata();
    void putdata();
    int getbookno();
    int getstock();
    void updatestock(int);
};

void book::getdata()
{
    cout << "
            Enter book name : ";

                              cin >>
        name;
    cout << "
            Enter author name : ";
                                cin >>
        author;
    cout << "
            Enter publisher name : ";
                                   cin >>
        publisher;
    cout << "
            Enter price : ";
                          cin >>
        price;
    cout << "
            Enter stock : ";
                          cin >>
        stock;
    cout << "
            Enter book no : ";
                            cin >>
        bookno;
}

void book::putdata()
{
    cout << "
        Book name : "<<name;
                    cout
         << "

                    Author name

        : "<<author;
          cout
         << "
          Publisher name : "<<publisher;
                           cout
         << "
                           Price : "<<price;
                                   cout
         << "
                                   Stock : "<<stock;
                                           cout
         << "
                                           Book no : "<<bookno;
}

int book::getbookno()
{
    return bookno;
}

int book::getstock()
{
    return stock;
}

void book::updatestock(int n)
{
    stock = stock - n;
}

void writebook()
{
    book b;
    ofstream fout("book.dat", ios::binary | ios::app);
    b.getdata();
    fout.write((char *)&b, sizeof(b));
    fout.close();
}

void displayall()
{
    book b;
    ifstream fin("book.dat", ios::binary);
    if (!fin)
    {
        cout << "
            File not found ";
            return;
    }
    cout << "
        All books are : ";
                        while (fin.read((char *)&b, sizeof(b)))
    {
        b.putdata();
        cout << "
                ";
    }
    fin.close();
}

void displaybook(int n)
{
    book b;
    ifstream fin("book.dat", ios::binary);
    if (!fin)
    {
        cout << "
            File not found ";
            return;
    }
    int flag = 0;
    while (fin.read((char *)&b, sizeof(b)))
    {
        if (b.getbookno() == n)
        {
            b.putdata();
            flag = 1;
            break;
        }
    }
    fin.close();
    if (flag == 0)
        cout << "
            Book not found ";
}

void modifybook(int n)
{
    book b;
    fstream file("book.dat", ios::binary | ios::in | ios::out);
    if (!file)
    {
        cout << "
            File not found ";
            return;
    }
    int flag = 0;
    while (file.read((char *)&b, sizeof(b)))
    {
        if (b.getbookno() == n)
        {
            b.putdata();
            cout << "
                    Enter new data ";
                    b.getdata();
            int pos = -1 * sizeof(b);
            file.seekp(pos, ios::cur);
            file.write((char *)&b, sizeof(b));
            flag = 1;
            break;
        }
    }
    file.close();
    if (flag == 0)
        cout << "
            Book not found ";
}

void deletebook(int n)
{
    book b;
    ifstream fin("book.dat", ios::binary);
    if (!fin)
    {
        cout << "
            File not found ";
            return;
    }
    ofstream fout("temp.dat", ios::binary);
    fin.read((char *)&b, sizeof(b));
    while (!fin.eof())
    {
        if (b.getbookno() != n)
            fout.write((char *)&b, sizeof(b));
        fin.read((char *)&b, sizeof(b));
    }
    fin.close();
    fout.close();
    remove("book.dat");
    rename("temp.dat", "book.dat");
}

void issuebook(int n)
{
    book b;
    fstream file("book.dat", ios::binary | ios::in | ios::out);
    if (!file)
    {
        cout << "
            File not found ";
            return;
    }
    int flag = 0;
    while (file.read((char *)&b, sizeof(b)))
    {
        if (b.getbookno() == n)
        {
            b.putdata();
            int s;
            cout << "
                    Enter no of books to be issued : ";
                                                     cin >>
                s;
            if (s <= b.getstock())
            {
                b.updatestock(s);
                int pos = -1 * sizeof(b);
                file.seekp(pos, ios::cur);
                file.write((char *)&b, sizeof(b));
                cout << "
                    Book issued ";
                    flag = 1;
                break;
            }
            else
            {
                cout << "
                    Required no of books not in stock ";
            }
        }
    }
    file.close();
    if (flag == 0)
        cout << "
            Book not found ";
}

void returnbook(int n)
{
    book b;
    fstream file("book.dat", ios::binary | ios::in | ios::out);
    if (!file)
    {
        cout << "
            File not found ";
            return;
    }
    int flag = 0;
    while (file.read((char *)&b, sizeof(b)))
    {
        if (b.getbookno() == n)
        {
            b.putdata();
            int s;
            cout << "
                    Enter no of books to be returned : ";
                                                       cin >>
                s;
            b.updatestock(-s);
            int pos = -1 * sizeof(b);
            file.seekp(pos, ios::cur);
            file.write((char *)&b, sizeof(b));
            cout << "
                Book returned ";
                flag = 1;
            break;
        }
    }
    file.close();
    if (flag == 0)
        cout << "
            Book not found ";
}

void main()
{
    clrscr();
    int ch, n;
    do
    {
        cout << "
                1. Write book 2. Display all books 3. Display particular book 4. Modify book 5. Delete book 6. Issue book 7. Return book 8. Exit
                    Enter your choice : ";
                                        cin >>
            ch;
        switch (ch)
        {
        case 1:
            writebook();
            break;
        case 2:
            displayall();
            break;
        case 3:
            cout << "
                    Enter book no : ";
                                    cin >>
                n;
            displaybook(n);
            break;
        case 4:
            cout << "
                    Enter book no : ";
                                    cin >>
                n;
            modifybook(n);
            break;
        case 5:
            cout << "
                    Enter book no : ";
                                    cin >>
                n;
            deletebook(n);
            break;
        case 6:
            cout << "
                    Enter book no : ";
                                    cin >>
                n;
            issuebook(n);
            break;
        case 7:
            cout << "
                    Enter book no : ";
                                    cin >>
                n;
            returnbook(n);
            break;
        case 8:
            exit(0);
        default:
            cout << "
                Invalid choice ";
        }
        getch();
        clrscr();
    } while (ch != 8);
}

Output :

    1. Write book 2. Display all books 3. Display particular book 4. Modify book 5. Delete book 6. Issue book 7. Return book 8. Exit
        Enter your choice : 1

    Enter book no : 1

    Enter book name : C++ Programming
