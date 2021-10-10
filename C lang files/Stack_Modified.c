#include<stdio.h>
#define size 5
void push(int*, int*,int);
void pop(int*, int*);
void display(int*, int);
int main()
{
    int stack[size];
    int top = -1;
    int choice,number;
    do
    {
        printf("\n**************Stack**************\n");
        printf("1. Push an element.\n");
        printf("2. Pop an element.\n");
        printf("3. Display all elements.\n");
        printf("4. Exit\n");
        printf("Enter the choice.");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
                printf("Enter the element for push: ");
                scanf("%d",&number);
                push(stack,&top,number);
            break;
        case 2 :
                 pop(stack,&top);
                 printf("%d is popped.\n",number);
                 break;
        case 3 :
                 printf("Display the elements in the stack.\n");
                 display(stack,top);
                 break;
        case 4 :
                 printf("End of the stack operation.\n");
                 break;
        default:
                 printf("Enter a valid choice.\n");
            break;
        }
    } while (choice!=4);

    return 0;

}
void push(int *s,int *t, int num)
{
     if (*t==size-1)
     printf("The stack is overflow\n");
     else
     (*t)++;
     *(s+(*t))=num;
}
void pop(int *s,int *t)
{
    int num;
     if (*t == -1)
     printf("The stack is underflown\n");
     else
     num = *(s+(*t));
     (*t)--;
}
void display(int *s,int t)
{
    int i;
    if (t == -1)
      printf("The stack is empty\n");
    else
    for ( i = 0; i <=t; i++)
    {
        printf("%d ",*(s+i));
    }
    
}