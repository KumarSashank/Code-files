// library management system using cpp
// Version: 1.0
// Date: 2018/08/01

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <dos.h>
#include <dir.h>

using namespace std;

class book
{
    int bookid;
    char title[20];
    char author[20];
    float price;
    int stock;

public:
    void create_book()
    {
        cout << "Enter The book id: ";
        cin >> bookid;
        cout << "

                Enter The Name of The Book : ";
                                             cin >>
            title;
        cout << "

                Enter The Author's Name: "; cin >>
            author;
        cout << "

                Enter The Price of The Book : ";
                                              cin >>
            price;
        cout << "   
            Enter The Stock : ";