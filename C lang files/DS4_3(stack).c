#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int num;
   struct Node *next;
}*top = NULL;
void push(int);
void pop();
void display();
int main()
{
   int choice, value;
   printf("\nStack using Linked List\n");
   do
   {
      printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	    case 1: printf("Enter the value to be insert: ");
		 scanf("%d", &value);
		 push(value);
		 break;
	    case 2: 
	    pop();
	    break;
	    case 3:
	    display(); 
	    break;
	    case 4:
	    exit(0);
	    default:
	    printf("\nPlease Select from 1 to 4 only\n");
      }
   }while(choice!=4);
}
void push(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->num = value;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   top = newNode;
   printf("\tInsertion is Success");
}
void pop()
{
   if(top == NULL)
      printf("\nStack is Empty\n");
   else{
      struct Node *temp = top;
      printf("\tDeleted element: %d", temp->num);
      top = temp->next;
      free(temp);
   }
}
void display()
{
   if(top == NULL)
      printf("\tStack is Empty");
   else{
      struct Node *temp = top;
      while(temp->next != NULL){
	 printf("%d\t",temp->num);
	 temp = temp -> next;
      }
      printf("%d",temp->num);
   }
}
