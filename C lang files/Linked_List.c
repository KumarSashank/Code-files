#include <stdio.h>
#include<stdlib.h>

typedef struct node
  {
  	 int data;
  	 struct node *next;
  }Node;
  
  Node* Ins_beg(Node*,int);
  Node* Ins_end(Node*,int);
  Node* Ins_pos(Node*,int,int);
  Node* Ins_before(Node*,int,int);
  Node* Ins_after(Node*,int,int);
  Node* Del_beg(Node*);
  Node* Del_end(Node*);
  Node* Del_pos(Node*,int);
  Node* Del_key(Node*,int);
  void Display(Node*);
  int Search(Node*,int);
  
   void main()
   {
   	  Node *first=NULL;
   	  int num,pos,key;
   	  int choice;
   	  
   	  do
   	  {
   	    printf("\n\n***Linked List Instructions***\n\n");
      	 printf("1.Insert the element at beginning\n");
   	  	 printf("2.Insert the element at end\n");
   	  	 printf("3.Insert the element at given position\n");
   	  	 printf("4.Insert the element before an key element\n");
   	  	 printf("5.Insert the element after an key element\n");
   	  	 printf("6.Delete the element at the beginning\n");
   	  	 printf("7.Delete the element at the end\n");
   	  	 printf("8.Delete the element at the given position\n");
   	  	 printf("9.Delete the given key element\n");
   	  	 printf("10.Search for a given element\n");
   	  	 printf("11.Display the linked list\n");
   	  	 printf("12.Quit\n");
   	  	 printf("Enter the choice:\n");
   	  	 scanf("%d",&choice);
   	  	 switch(choice)
   	  	 {
   	  	 	 case 1: 
   	  	 	         printf("Enter the number: ");
   	  	 	         scanf("%d",&num);
   	  	 	         first=Ins_beg(first,num);
   	  	 	         break;
   	  	 	 case 2:
   	  	 	 	     printf("Enter the number: ");
   	  	 	 	     scanf("%d",&num);
   	  	 	 	     first=Ins_end(first,num);
   	  	 	 	     break;
   	  	 	case 3:
   	  	 		    printf("Enter the number: ");
   	  	 		    scanf("%d",&num);
   	  	 		    printf("\nEnter the position: ");
   	  	 		    scanf("%d",&pos);
   	  	 		    first=Ins_pos(first,num,pos);
   	  	 		    break;
   	  	 	case 4:
   	  	 		   printf("Enter the number: ");
   	  	 		   scanf("%d",&num);
   	  	 		   printf("\nEnter the Key element: ");
   	  	 		   scanf("%d",&key);
   	  	 		   first=Ins_before(first,num,key);
   	  	 		   break;
   	  	 	case 5:
   	  	 		   printf("Enter the number: ");
   	  	 		   scanf("%d",&num);
   	  	 		   printf("\nEnter the Key element: ");
   	  	 		   scanf("%d",&key);
   	  	 		   first=Ins_after(first,num,key);
   	  	 		   break;
   	  	 	case 6:
   	  	 		   first=Del_beg(first);
   	  	 		   break;
   	  	 	case 7:
   	  	 		   first=Del_end(first);
   	  	 		   break;
   	  	 	case 8:
   	  	 		  printf("Enter the position: ");
   	  	 		  scanf("%d",&pos);
   	  	 		  first=Del_pos(first,pos);
   	  	 		  break;
   	  	 	case 9:
   	  	 		   printf("Enter the key element: ");
   	  	 		   scanf("%d",&key);
   	  	 		   first=Del_key(first,key);
   	  	 		   break;
   	  	 	case 10:
   	  	 		printf("Enter the given element: ");
   	  	 		scanf("%d",&num);
   	  	 		pos=Search(first,num);
   	  	 		printf("the position is %d",pos);
   	  	 		break;
   	  	 		    
   	  	 	case 11:
   	  	 		      Display(first);
   	  	 		        break;
   	  	 	case 12:
   	  	 		        printf("\n\nEnd Of the Linked List\n\n");
   	  	 		        break;
   	  	 		        
   	  	 	default:
   	  	 		    printf("You have entered a invalid choice\n");
   	  	 		   
			  }
   	  	 
		 }while(choice != 12);
   	  
   }
   
    Node* Ins_beg(Node *first,int num)
    {
    	Node *temp;
    	temp=(Node*)malloc(sizeof(Node));
    	temp->data=num;
    	temp->next=first;
    	first=temp;
    	return first;
	}
  Node* Ins_end(Node *first,int num)
  {
  	Node *temp,*t;
  	temp=(Node*)malloc(sizeof(Node));
  	temp->data=num;
  	if(first == NULL)
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
  Node* Ins_pos(Node *first,int num,int pos)
  {
  	 Node *temp,*t;
  	 int count=0;
  	 if(pos==1)
  	    first=Ins_beg(first,num);
  	 else if(first == NULL)
  	    printf("Empty List,Insertion is failed\n");
   	else
    {
    	count++;
  	  	t=first;
  	  	while(t->next != NULL && count<pos-1)
  	  	{
  	  		t=t->next;
  	  		count++;
		}
		if(count==pos-1)
		{
			temp=(Node*)malloc(sizeof(Node));
			temp->data=num;
			temp->next=t->next;
			t->next=temp;
		}
	  else
	    printf("Its an invalid position..\n");
	}
  	return first;
  }
  
  Node* Ins_before(Node *first,int num,int key)
  {
  	Node *t,*temp;
  	if(first == NULL)
  	  printf("List is empty,Key element is not found\n");
  	else if(first->data == key)
  	   first=Ins_beg(first,num);
  	else
  	    {
  	    	t=first;
  	    	 while(t->next != NULL)
  	    	 {
  	    	    if(t->next->data == key)
				  break;
				else
				 t=t->next;	
			}
			if(t->next == NULL)
			  printf("Key element is not found");
			else
			  {
			  	temp=(Node*)malloc(sizeof(Node));
			  	temp->data=num;
			  	temp->next=t->next;
			  	t->next=temp;
			  }
		}
  	return first;
  }
  Node* Ins_after(Node *first,int num,int key)
  {
  	 Node *temp,*t;
  	if(first == NULL)
  	  printf("List is empty,insertion is failed..\n");
  	else 
  	{
  		 t=first;
  		 while(t->next != NULL)
  		 {
  		 	if(t->data==key)
  		 	 break;
  		 	else
  		 	  t=t->next;
		   }
		if(t->next==NULL)
		  printf("Key element is not found..");
		else
   		{
		   temp=(Node*)malloc(sizeof(Node));
		   temp->data=num;
		   temp->next=t->next;
		   t->next=temp;
    	  }
  	return first;
  }
}
  Node* Del_beg(Node *first)
  {
  	Node *temp;
  	if(first == NULL)
  	  printf("Empty List..,Deletion Failed\n");
  	else
  	{
  		temp=first;
  		first=first->next;
  		temp->next=NULL;
  		free(temp);
	  }
  	return first;
  }
  Node* Del_end(Node *first)
  {
  	Node *t,*temp;
  	if(first == NULL)
  	  printf("Empty List,Deletion failed..\n");
  	  else if(first->next == NULL)
  	  {
  	  	 temp=first;
  	  	 first=NULL;
  	  	 free(temp);
  	  	  
		}
    else
    {
    	t=first;
    	while(t->next != NULL)
    	{
    		if(t->next->next == NULL)
    		 break;
    		else
    		t=t->next;
		}
	    temp=t->next;
	    t->next=NULL;
	}
  	return first;
  }
  Node* Del_pos(Node *first,int pos)
  {
     Node *temp,*t;
     int count=0;
     if(first == NULL)
	   printf("Empty list,deletion failed\n");
	   else if(pos==1)
	    first=Del_beg(first);
	    else
	     {
	     	count++;
	     	t=first;
	     	while(t->next != NULL && count < pos-1)
	     	{
	     		t=t->next;
	     		count++;
			 }
			 if(count==pos-1)
			 {
			 	temp=t->next;
			 	t->next=t->next->next;
			 	temp->next=NULL;
			 	free(temp);
			 }
			 else
			   printf("Position is invalid\n");
		 }
  
  	return first;
  }
  Node* Del_key(Node *first,int key)
  {
  	Node *t,*temp;
  	if(first == NULL)
  	  printf("Empty list,Deletion is failed\n");
  	else if(first->data == key)
  	  first = Del_beg(first);
  	else
  	{
  		t=first;
  		while(t->next != NULL)
  		{
  			if(t->next->data == key)
  			  break;
  			else
  			  t=t->next;
		}
		if(t->next == NULL)
		  printf("Key element is not found\n");
		else
		 {
		 	temp=t->next;
		 	t->next=temp->next;
		 	temp->next=NULL;
		 	free(temp);
		 }
	  }
  	
  	return first;
  }
  void Display(Node *first)
  {
  	Node *temp;
  	if(first == NULL)
  	  printf("The List is empty");
  	else
    {
  	  	temp=first;
  	  	printf("The List as follows\n");
  	  	while(temp != NULL)
  	  	{
  	  		printf("%d\t",temp->data);
  	  		temp=temp->next;
		}
	}
  }
  int Search(Node *first,int num)
  {
  	int count=1;
  	Node *t;
  	if(first == NULL)
  	  printf("Empty list,Search is not possible");
  	else
  	{
  		t=first;
  		while(t->next != NULL)
  		{
  			if(t->data == num)
  			 break;
  			else
  			 {
  			 	count++;
  			 	t=t->next;
			   }
		  }
	  }
  	   return count;
  }