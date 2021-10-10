//Program to implement stack using arrays.
#include <stdio.h>
#define size 5
int stack[size];
int i, number;
int top = -1;
void pop();
void push(int);
void display();

int main()
{
    int choice;
    do
    {
        printf("**************Stack**************\n");
        printf("1. Push an element.\n");
        printf("2. Pop an element.\n");
        printf("3. Display all elements.\n");
        printf("4. Exit\n");
        printf("Enter the choice.");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element for push: ");
            scanf("%d", &number);
            push(number);
            break;
        case 2:
            printf("Enter the element for pop:");
            scanf("%d", &number);
            pop();
            break;
        case 3:
            printf("Display the elements in the stack.\n");
            display();
            break;
        case 4:
            printf("End of the stack operation.\n");
            break;
        default:
            printf("Enter a valid choice.\n");
            break;
        }
    } while (choice != 4);

    return 0;
}
//Function def for push
void push(int number)
{
    if (top == size - 1)
    {
        printf("The stack is overflown.\n");
        return;
    }
    else
        stack[++top] = number;
    printf("%d was pushed", number);
    return;
}
//Function def for pop
void pop()
{
    if (top == -1)
        printf("The stack is underflown.\n");
    else
        stack[top--] = number;
}
//Function def for display
void display()
{
    if (top == -1)
    {
        printf("The stack is empty.\n");
    }
    else
        for (i = 0; i <= top; i++)
        {
            printf("%d ", stack[i]);
        }
}