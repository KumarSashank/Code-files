#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int num;
    struct node *next;
}Node;

Node* Insert_Begining(Node *,int);
Node* Insert_Ending(Node *,int);
Node* Insert_Middle(Node *,int,int);
void display(Node *);

int main()
{
    Node *first=NULL;
    int n,position,key,choice;

    do
    {
        printf("\nInserting a node.\n");
        printf("1.At begining of a Linked List.\n");
        printf("2.At end of a Linked List.\n");
        printf("3.At middle of a Linked List.\n");
        printf("4.Display all elements\n");
        printf("5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the number: ");
            scanf("%d",&n);
            first=Insert_Begining(first,n);
            break;

            case 2:
            printf("Enter the number: ");
            scanf("%d",&n);
            first=Insert_Ending(first,n);
            break;

            case 3:
            printf("Enter the number: ");
            scanf("%d",&n);
            printf("Enter the position: ");
            scanf("%d",&position);
            first=Insert_Middle(first,n,position);
            break;

            case 4:
            display(first);
            break;

            case 5:
            printf("Exited");
            break;

            default:
            printf("\nSelect a valid choice\n");
        }
    }while(choice!=5);
}

Node* Insert_Begining(Node *first,int n)
{
    Node *temp;
    temp=(Node*)malloc(sizeof(Node));
    temp->num=n;
    temp->next=first;
    first=temp;
    return first;
}

Node* Insert_Ending(Node *first,int n)
{
    Node *temp,*t;
    temp=(Node*)malloc(sizeof(Node));
    temp->num=n;
    if (first==NULL)
    {
        temp->next=first;
        first=temp;
    }
    else
    {
        t=first;
        while(t->next != NULL)
          t=t->next;
          temp->next=t->next;
          t->next=temp;
    }
    return first;
}

Node* Insert_Middle(Node *first,int n,int position)
{
    Node *temp,*t;
    int i=0;
    if (position==1)
    {
        first=Insert_Begining(first,n);
    }
    else if (first==NULL)
    {
        printf("The List is empty, So we can't insert in middle.\n");
    }
    else
    {
        i++;
        t=first;
        while((t->next !=NULL) && (i<position-1))
        {
            t=t->next;
            i++;
        }
        if (i==position-1)
        {
            temp=(Node*)malloc(sizeof(Node));
            temp->num=n;
            temp->next=t->next;
            t->next=temp;
        }
        else
        printf("The selected position is not there.\n");
    }
    return first;
}

void display(Node *first)
{
    Node *temp;
    if (first==NULL)
      printf("The List is empty.\n");
    else
    {
        temp=first;
        printf("The elements in the list are:\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->num);
            temp=temp->next;
        }
    }
}