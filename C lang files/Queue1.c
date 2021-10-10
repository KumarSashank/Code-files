#include<stdio.h>
#define Size 10

int Queue[Size],front=-1,rear=-1;
void enqueue (int);
void dequeue ();
void display();

int main()
{
    int choice = 0,number;
do
{
    printf("1. Insert an element");
    printf("2.Delete an element");
    printf("3.Display");
    printf("4.Exit");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1: printf("Enter the number to insert");
        scanf("%d",&number);
        enqueue(number);
        break;
        case 2: number = dequeue(); 
        printf("The %d is popped from the queue",number);
        break;
        case 3: printf("The elements of the queue:\n");
        display(); break;
        case 4:  break;
        
    }
} while (choice!=4);

}

void enqueue(int number)
{
    int n;
     if (rear == Size-1)
     {
         printf("The Queue is overflown");
     }
     else if (front == -1 && rear == -1)
     {
         front=0;
         rear=0;
         Queue[front]= number;
     }
     else
     rear++;
     Queue[rear]= number;
}

void dequeue()
{
    if (front==-1&& rear=-1)
    printf("The Queue is underflown");
    else if (front==rear)
    number=Queue[front];
    front=0;
    rear=0;
}