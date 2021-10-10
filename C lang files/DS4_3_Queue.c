#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int num;
   struct Node *next;
}*front = NULL,*rear = NULL;
void insert(int);
void delete();
void display();
int main()
{
   int choice, value;
   printf("\nQueue using Linked List");
   do
   {
      printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	 case 1:
	 printf("Enter the value :-  ");
	 scanf("%d", &value);
	 insert(value);
	 break;
	 case 2:
	 delete();
	 break;
	 case 3:
	 display();
	 break;
	 case 4:
	 exit(0);
	 default:
	 printf("\nPlease Select From 1 to 4 Only\n");
      }
   }while(choice!=4);
}
void insert(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->num = value;
   newNode -> next = NULL;
   if(front == NULL)
      front = rear = newNode;
   else{
      rear -> next = newNode;
      rear = newNode;
   }
   printf("\tInsertion is Success");
}
void delete()
{
   if(front == NULL)
      printf("\tQueue is Empty");
   else{
      struct Node *temp = front;
      front = front -> next;
      printf("\tDeleted element: %d", temp->num);
      free(temp);
   }
}
void display()
{
   if(front == NULL)
      printf("\tQueue is Empty");
   else{
      struct Node *temp = front;
      while(temp->next != NULL){
	 printf("%d\t",temp->num);
	 temp = temp -> next;
      }
      printf("%d\t",temp->num);
   }
}