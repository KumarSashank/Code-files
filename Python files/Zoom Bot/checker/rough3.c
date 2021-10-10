#include <stdio.h>
#include <stdlib.h>

typedef struct node
 {
 	int data;
 	struct node *next;
 	struct node *prev;
 }Node;
 
 Node* Ins_beg(Node*,int);
 Node* Ins_end(Node*,int);
 Node* Ins_pos(Node*,int,int);
 Node* Del_beg(Node*);
 Node* Del_end(Node*);
 Node* Del_pos(Node*,int);
 int  Search(Node*,int);
 void Display(Node*);
 
 void main()
 {
 	Node *first=NULL;
 	int choice,num,pos;
 
 	do
 	{
 		
 		printf("\n1.Insertion at beginning\n");
 		printf("2.Insertion at end\n");
 		printf("3.Insertion at position\n");
 		printf("4.Deletion at beginning\n");
 		printf("5.Deletion at end\n");
 		printf("6.Deletion at position\n");
 		printf("7.Searching the content\n");
 		printf("8.Display\n");
 		printf("9.Quit\n");
 		printf("Enter your choice: ");
 	    scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1:
 				   printf("Enter the number: ");
 				   scanf("%d",&num);
 				   first=Ins_beg(first,num);
 				   break;
 			case 2:
 				   printf("Enter the number:");
 				   scanf("%d",&num);
 				   first=Ins_end(first,num);
 				   break;
 			case 3:
 				    printf("Enter the number:");
 				    scanf("%d",&num);
 				    printf("Enter the position:");
 				    scanf("%d",&pos);
 				    first=Ins_pos(first,pos,num);
 				    break;
 			case 4:
 				   first=Del_beg(first);
 				   break;
 			case 5:
 				    first=Del_end(first);
 				    break;
 			case 6:
 				   printf("Enter the position:\n");
 				   scanf("%d",&pos);
 				   first=Del_pos(first,pos);
 				   break;
 			case 7:
 				    printf("Enter the number: ");
 				    scanf("%d",&num);
 				    pos=Search(first,num);
 				    if(pos != 0)
 				    printf("The element is found = %d",pos);
 				    break;
 				   
 			case 8:
 				   Display(first);
 				   break;
 			case 9:
 				   printf("End of the instructions..\n");
 				   break;
 			default:
 				 printf("Plz,Enter the valid choice\n");
		 }
	 }while(choice != 9);
 }
 
 Node* Ins_beg(Node *first,int num)
 {
 	Node *temp;
 	if(first == NULL)
 	{
 		temp=(Node*)malloc(sizeof(Node));
 		temp->data=num;
 		temp->prev=NULL;
 		temp->next=NULL;
 		first=temp;
	 }
	 else
	 {
	 	temp=(Node*)malloc(sizeof(Node));
	 	temp->data=num;
	 	temp->prev=NULL;
	 	temp->next=first;
	 	first=temp;
	 }
	 printf("Insertion is done\n");
 	return first;
 }
 
  Node* Ins_end (Node *first,int num)
 {
 	if(first == NULL)
 	  first=Ins_beg(first,num);
 	else
 	{
 		Node *temp,*t;
 		t=first;
 		temp=(Node*)malloc(sizeof(Node));
 		temp->data=num;
 		while(t->next != NULL)
 		{
 			t=t->next;
		 }
		 temp->next=NULL;
		 temp->prev=t;
		 t->next=temp;
	 }
	 printf("Insertion is done\n");
 	return first;
 }
   Node* Ins_pos(Node *first,int pos,int num)
   {
   	int count=0;
   	Node *temp,*t;
   	  if(pos == 1)
   	     first=Ins_beg(first,num);
   	else if(first == NULL)
   	     printf("The position is not found\n");
   	else
   	   {
   	   	    count = 1;
   	   	    t=first;
   	   	  while(t->next != NULL && count < pos - 1)
   	   	  {
   	   	  	t=t->next;
   	   	  	count++;
	    }
	    if(count == pos - 1)
	    {
	    	temp = (Node*)malloc(sizeof(Node));
	    	temp->data=num;
	    	temp->prev=t;
	    	temp->next=t->next;
	    	t->next=temp;
	    	printf("Insertion is done\n");
	    
		}
		else
		{
			printf("The position is not found\n");
		}
		return first;
   	   	
	  }
   }
  Node* Del_beg(Node *first)
  {
  	if(first == NULL)
  	printf("The Deletion operation is failed\n");
  	else
  	{
  		Node *temp;
  		temp=first;
        first=first->next;
        temp->next=NULL;
        first->prev=NULL;
  		free(temp);
        printf("Deletion is done\n");
	  }
	  return first;
  }
  Node* Del_end(Node *first)
  {
  	if(first == NULL)
  	  printf("Deletion operation is failed..\n");
  	else
  	{
  		Node *temp,*t;
  		temp=first;
  		while(temp->next->next != NULL)
  		  temp=temp->next;
  		  temp->next=t;
  		  t->prev=NULL;
  		  temp->next=NULL;
  		  free(t);
  		  printf("Deletion is done\n");
	  }
	  return first;
  }
  
  Node* Del_pos(Node *first,int pos)
  {
  	Node *temp,*t;
  	int count =0;
  	if(pos == 1)
  	  first = Del_beg(first);
  	else if(first == NULL)
  	  printf("The element is not found,Deletion operation is failed\n");
  	else
  	{
  		count = 1;
  		t=first;
  		while(t->next != NULL && count < pos - 1)
  		{
  			t=t->next;
  			count++;
		  }
		if(count == pos - 1)
		{
			temp=t->next;
			t->next=temp->next;
			temp->next=NULL;
			temp->prev=NULL;
			free(temp);
			printf("The Deletion is done");
		}
		else
		{
			printf("The position is not found\n");
		}
		return first;
	  }
  }
  int Search (Node *first,int num)
  {
  	Node *t;
  	t=first;
  	int count = 1;
  	while(t->next != NULL)
  	{
  		if(t->data == num)
  		  break;
  		else
  		{
  			t=t->next;
  			count++;
		}
	  }
	  	if(t->next == NULL)
		{
			printf("The element is not found\n");
			return 0;
		}
		else
		{
			return count;
		}
  }
 void Display(Node *first)
 {
 	Node *t;
 	t=first;
 	if(first == NULL)
 	  printf("List is empty\n");
 	  else
 	  {
 	  	printf("The List follows\n");
 	  	while(t != NULL)
 	  	{
 	  		printf("%d\t",t->data);
 	  		t=t->next;
		   }
	   }
 }