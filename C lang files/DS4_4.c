#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
int data;
struct Node *next;
}node;
void insert(node *pointer, int data)
{
while(pointer->next!=NULL)
{
pointer = pointer -> next;
}
pointer->next = (node *)malloc(sizeof(node));
pointer = pointer->next;
pointer->data = data;
pointer->next = NULL;
}
int search(node *pointer, int key)
{
pointer = pointer -> next;
while(pointer!=NULL)
{
if(pointer->data == key)

{
return 1;
}
pointer = pointer -> next;
}
return 0;
}
void main()
{
node *start,*temp;
int status;
clrscr();
start = (node *)malloc(sizeof(node));
temp = start;
temp -> next = NULL;
printf("1. Insert\n");
printf("2. Search\n");
printf("Select your option:");
while(1)
{
int n;
scanf("%d",&n);
if(n==1)
{
int data;
printf("Enter any data:\n");
scanf("%d",&data);
insert(start,data);
printf("Insert %d data Successfully\n",data);
}

else if(n==2)
{
int data;
printf("Which Data Value to Search:\n");
scanf("%d",&data);
status = search(start,data);
if(status)
{
printf("Element Found\n");
}
else
{
printf("Element Not Found\n");
}
}
}
getch();
}