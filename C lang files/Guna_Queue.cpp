#include <iostream>
#define SIZE 10
using namespace std;

void Enqueue(int);
int Dequeue();
void Display();

int Q[SIZE], fr = -1, re = -1;

int main()
{
    int choice, num;
    do
    {
        cout << "1.Enter an element: \n";
        cout << "2.Delete an element: \n";
        cout << "3.Display the Queue: \n";
        cout << "4.Quit\n";
        cout << "Enter your choice: \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element: \n";
            cin >> num;
            Enqueue(num);
            break;
        case 2:
            num = Dequeue();
            if (num != -98)
            {

                cout << "The popped element:" << num << endl;
            }
            break;
        case 3:
            Display();
            break;
        case 4:
            cout << "Exited\n";

        default:
            cout << "Enter a valid choice..";
        }
    } while (choice != 4);
}

void Enqueue(int num)
{
    if (re == SIZE - 1)
    {
        cout << "Queue Overflow...\n";
    }
    else if (fr == -1 && re == -1)
    {
        fr++;
        re++;
        Q[re] = num;
    }
    else
    {
        re++;
        Q[re] = num;
    }
}

int Dequeue()
{
    int n;
    if (fr == -1 && re == -1)
    {
        cout << "Queue underflow...\n";
        return -98;
    }
    else if (fr == re)
    {
        n = Q[fr];
        fr = 0;
        re = 0;
        return n;
    }
    else
    {
        n = Q[fr];
        fr++;
        return n;
    }
}

void Display()
{
    int i;
    if (fr == -1 && re == -1)
    {
        cout << "The Queue is empty\n";
    }
    else
    {

        for (i = fr; i <= re; i++)
        {
            cout << Q[i] << endl;
        }
    }
}