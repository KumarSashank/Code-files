// Implementation of Circular Linked List

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

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
int Search(Node*,int);
void Display(Node*);

void main()
{
	Node *first=NULL;
	int num,key,pos,choice;

	do
	{
		printf("\n\n*********** LINKED LIST IMPLEMENTATION ***********\n\n");
		printf("1. Insert at the beginning\n");
		printf("2. Insert at the end\n");
		printf("3. Insert at the given position\n");
		printf("4. Insert before given key element\n");
		printf("5. Insert after the given key element\n");
		printf("6. Delete first element\n");
		printf("7. Delete last element\n");
		printf("8. Delete element at the given position\n");
		printf("9. Delete the given key element\n");
		printf("10. Search the given element\n");
		printf("11. Display list contents\n");
		printf("12. Exit\n");
		printf("\nEnter your choice:  ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: printf("Enter the number to be inserted\n");
			        scanf("%d",&num);
			        first=Ins_beg(first,num);
			        break;
			case 2: printf("Enter the number to be inserted\n");
			        scanf("%d",&num);
			        first=Ins_end(first,num);
			        break;
			case 3: printf("Enter the number to be inserted\n");
			        scanf("%d",&num);
			        printf("Enter the position number\n");
			        scanf("%d",&pos);
			        first=Ins_pos(first,num,pos);
			        break;
			case 4: printf("Enter the number to be inserted\n");
			        scanf("%d",&num);
			        printf("Enter the Key element\n");
			        scanf("%d",&key);
			        first=Ins_before(first,num,key);
			        break;
			case 5: printf("Enter the number to be inserted\n");
			        scanf("%d",&num);
			        printf("Enter the Key element\n");
			        scanf("%d",&key);
			        first=Ins_after(first,num,key);
			        break;
			case 6: first=Del_beg(first);
			         break;
			case 7: first=Del_end(first);
			        break;
			case 8: printf("Enter position of the element to be deleted\n");
			        scanf("%d",&pos);
			        first=Del_pos(first,pos);
			        break;
			case 9: printf("Enter the element to be delete\n");
			        scanf("%d",&key);
			        first=Del_key(first,key);
			        break;
			case 10:printf("Enter the element to be searched\n");
			        scanf("%d",&key);
					pos=Search(first,key);
					if(pos==0)
					  printf("Element not in the list\n");
					else
					  printf("Element %d found at position %d\n",key,pos);
					break;
			case 11: Display(first);
			         break;
			case 12: printf("End of Linked list program");
			         break;
			default: printf("Enter valid choice\n");

		}
	}while(choice!=12);
}

//Function definitions

Node* Ins_beg(Node *first,int num)
{
	Node *temp,*t;
	temp=(Node*)malloc(sizeof(Node));
	temp->data=num;
	if(first==NULL)
    {
        first=temp;
        temp->next=first;
    }
    else
    {
       t=first;
        while(t->next!=first)
            t=t->next;
        temp->next=first;
        t->next=temp;
        first=temp;
    }

	printf("Insertion successfull\n");
	return first;
}

Node* Ins_end(Node *first,int num)
{
	Node *temp,*t;
	temp=(Node*)malloc(sizeof(Node));
	temp->data=num;
	if(first==NULL)
	 {
	     first=temp;
	     temp->next=first;
	 }
	else
	{
		t=first;
		while(t->next!=first)
		   t=t->next;
		t->next=temp;
		temp->next=first;
	}
	return first;
}

Node* Ins_pos(Node *first,int num,int pos)
{
	Node *temp,*t;
	int count=0;
	if(pos==1)
	   first=Ins_beg(first,num);
	else if(first==NULL)
	   printf("Empty List, Insertion failed\n");
	else
	{
		t=first;
		count++;
		while(t->next!=first && count<pos-1)
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
			printf("Insertion successful");
		}
		else
		  printf("Invalid Position. Insertion failed\n");

	}

	return first;
}

Node* Ins_before(Node *first,int num,int key)
{
	Node *temp,*t;
	if(first==NULL)
	 printf("List is empty.Key element not present");
	else if(first->data==key)
	{
		first=Ins_beg(first,num);
	}
	else
	{
		t=first;
		while(t->next != first)
		{
			if(t->next->data==key)
			  break;
			else
              t=t->next;
		}
		if(t->next==first)
		     printf("Key element not found, Insertion failed\n");
		else
		{
			temp=(Node*)malloc(sizeof(Node));
			temp->data=num;
			temp->next=t->next;
			t->next=temp;
			printf("Insertion successfull\n");
		}
	}

	return first;
}

Node* Ins_after(Node *first,int num,int key)
{
	Node *temp,*t;
	if(first==NULL)
	   printf("List empty, Insertion failed\n");
	else
	{
		t=first;
		while(t->next!= first)
		{
			if(t->next->data==key)
			{
				t=t->next;
				temp=(Node*)malloc(sizeof(Node));
				temp->data=num;
				temp->next=t->next;
				t->next=temp;
				break;
			}
			else
			  t=t->next;
		}
		if(t->next==first)
		  printf("Key element not found. Insertion failed\n");
	}
	return first;
}

Node* Del_beg(Node *first)
{
   Node *temp,*t;
   if(first==NULL)
     printf("Empty List, Deletion failed\n");
    else if(first->next==first)
    {
        temp=first;
        first=NULL;
        free(temp);
    }
    else
    {
        t=first;
        while(t->next!=first)
            t=t->next;
    	temp=first;
    	first=first->next;
    	t->next=first;
    	temp->next=NULL;
    	free(temp);
	}
   return first;
}

Node* Del_end(Node *first)
{
	Node *temp,*t;
	if(first==NULL)
	   printf("List empty, deletion failed\n");
	else if(first->next==first)
	{
		temp=first;
		first=NULL;
		free(temp);
	}
	else
	{
		t=first;
		while(t->next->next!=first)
		{
			t=t->next;
		}
		temp=t->next;
		temp->next=NULL;
		t->next=first;
		free(temp);
	}
	return first;
}

Node* Del_pos(Node *first,int pos)
{
	Node *temp,*t;
	int count=0;
	if(first==NULL)
	  printf("Empty List, deletion failed\n");
	else if(pos==1)
	  first=Del_beg(first);
	else
	{
		t=first;
		count++;
		while(t->next!=first && count<pos-1)
		{
			t=t->next;
			count++;
		}
		if(count==pos-1)
		{
			temp=t->next;
			t->next=temp->next;
			temp->next=NULL;
			free(temp);
		}
		else
		  printf("Invalid Position, deletion failed\n");

	}
	return first;
}

Node* Del_key(Node *first,int key)
{
	Node *temp,*t;
	if(first==NULL)
	  printf("Empty list, deletion failed\n");
	else if(first->data==key)
	{
		first=Del_beg(first);
	}
	else
	{
		t=first;
		while(t->next!=first)
		{
			if(t->next->data==key)
			{
				temp=t->next;
				t->next=temp->next;
				temp->next=NULL;
				free(temp);
				break;
			}
			else
			  t=t->next;
		}
		if(t->next==first)
		   printf("Key element not found\n");
	}
	return first;
}

int Search(Node *first,int key)
{
	Node *t;
	int count=0;
	if(first==NULL)
	   return 0;
    else if(first->data==key)
        return 1;
	else
	{
		t=first;
		count++;
		while(t->next!=first)
		{
			if(t->data==key)
			{
				return count;
			}
			else
			{
			  t=t->next;
			  count++;
		    }
		}

	}

	return 0;
}

void Display(Node *first)
{
	Node *temp;
	if(first==NULL)
		printf("List is empty\n");
	else
	{
		printf("List elements are as follows:\n");
		printf("%d\t",first->data);
		temp=first->next;
		while(temp!=first)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
	    }

	}
}


