#include <iostream>
#include <stdlib.h>
using namespace std;
struct linkedlst
{
    int data;
    struct linkedlst *Nxt;
};
struct linkedlst *Head = NULL, *Tail = NULL;
void create_lst()
{
    struct linkedlst *pst, *curr;
    do
    {
        curr = (struct linkedlst *)malloc(sizeof(struct linkedlst));
        cout << "Enter Data:-" << endl;
        cin >> curr->data;
        curr->Nxt = NULL;
        if (curr->data == 0)
        {
            break;
        }
        if (Head == NULL)
        {
            Head = curr;
        }
        else
        {
            pst->Nxt = curr;
        }
        pst = curr;
    } while (1);
}
void display()
{
    struct linkedlst *p = Head;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->Nxt;
    }
}
int deleteElement(int x)
{
    struct linkedlst *pst, *curr;
    pst = curr = Head;
    int flag = 0;
    while (curr != NULL)
    {
        if (curr->data == x)
        {
            flag = 1;
            break;
        }
        pst = curr;
        curr = curr->Nxt;
    }
    if (flag == 1)
    {
        if (curr == Head)
        {
            Head = Head->Nxt;
            free(curr);
        }
        else if (curr == Tail)
        {
            Tail = pst;
            Tail->Nxt = NULL;
            free(curr);
        }
        else
        {
            pst->Nxt = curr->Nxt;
            free(curr);
        }
    }
    return flag;
}
int main()
{
    create_lst();
    cout << "Current Linked List\n"
         << endl;
    display();
    int del;
    cout << "\nEnter Element To delete:-\n"
         << endl;
    cin >> del;
    int flag;
    flag = deleteElement(del);
    if (flag == 1)
    {
        cout << del << " is successfully deleted" << endl;
    }
    else
    {
        cout << del << " Element Not Found!!" << endl;
    }
    cout << "\nCurrent Linked List\n"
         << endl;
    display();
}