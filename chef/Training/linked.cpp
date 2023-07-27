#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;

void append(int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node *temp = new Node();
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void insert_begin(int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = head;
    head = newnode;
}

void insert_positon(int k, int data)
{
    Node *newnode = new Node();
    newnode->data = data;
    newnode->next = NULL;

    Node *temp = new Node();
    temp = head;
    for (int i = 0; i < k - 2; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

void delete_end()
{
    Node *temp = new Node();
    temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void display()
{
    Node *temp = head;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

int main()
{
    int n;
    int data;
    do
    {
        /* code */
        cout << "1. Append the list" << endl;
        cout << "2. Insert at the begining" << endl;
        cout << "3. Insert at the position" << endl;
        cout << "4. Delete at end" << endl;
        cout << "Display all" << endl;
        cout << "5. Exit" << endl;
        cout << "Select the option: ";

        cin >> n;
        switch (n)
        {
        case 1:
            /* code */
            cout << "Enter the data: ";
            cin >> data;
            append(data);
            display();
            break;
        case 2:
            cout << "Enter the data: ";
            cin >> data;
            insert_begin(data);
            display();

        case 3:
            cout << "Enter the data: ";
            cin >> data;
            int k;
            cout << "Enter the position: ";
            cin >> k;
            insert_positon(k, data);
            display();

        case 4:
            delete_end();
            display();

        default:
            break;
        }
    } while (n != 5);
}