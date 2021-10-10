#include<stdio.h> 
#include<stdlib.h> 
  
typedef struct node 
{ 
	int data; 
	struct node *next; 
	struct node *prev; 
}node; 
  
void ins_beg(); 
void ins_mid(); 
void ins_end(); 
void display(); 
  
node *head=NULL,*temp,*t; 
int n,num,pos; 
  
int main() 
{ 
	int choice;
	do 
	{ 
		printf("1.Insert at the beginning\n"); 
		printf("2.Insert at the middle\n"); 
		printf("3.Insert at the end\n"); 
		printf("4.Display\n");
		printf("5.Exit\n"); 
		printf("Enter your choice: "); 
		scanf("%d",&choice); 
		switch(choice) 
		{ 
			case 1 : printf("Enter the number:"); 
			         scanf("%d",&num); 
			         ins_beg(); 
			         break; 
			 
			case 2 : printf("Enter the number:"); 
			         scanf("%d",&num); 
			         ins_mid(); 
			         break; 
			          
			case 3 : printf("Enter the number:"); 
			         scanf("%d",&num); 
			         ins_end(); 
			         break; 
			 
			case 4 : printf("List of elements are :"); 
			         display(); 
			         break; 
			          
			case 5 : printf("End of insert operations\n"); 
			         break; 
			         
			default : printf("Enter a valid choice\n"); 
		} 
	}while(choice!=5); 
} 
  
void ins_beg() 
{ 
	if(head==NULL) 
	{ 
		head=(node*)malloc(sizeof(node)); 
		head->prev=NULL; 
		head->data=num; 
		temp=head; 
	} 
	else 
	{ 
		t=(node*)malloc(sizeof(node)); 
		t->data = num; 
		t->next = head; 
		t->prev = NULL; 
		head = t; 
	} 
	temp->next=NULL; 
} 
  
void ins_mid() 
{ 
	printf("Enter the position at which the number should be inserted:\n"); 
	scanf("%d",&pos); 
	t = (node*)malloc(sizeof(node)); 
	t->data=num; 
	n=0; 
	temp=head; 
	if(temp==NULL) 
	{ 
		ins_beg(); 
		n++; 
	} 
	else 
	{ 
		while(temp->next!=NULL&&n==pos-1) 
		{ 
			temp = temp->next; 
			n++; 
		} 
        t->next = temp->next; 
        t->prev = temp; 
		temp->next = t; 
	    temp->prev = t; 
	} 
} 
  
void ins_end() 
{ 
	temp=head; 
	t = (node*)malloc(sizeof(node)); 
	t->data=num; 
	if(temp==NULL) 
	    ins_beg(); 
	else 
	{ 
		while(temp->next!=NULL) 
		{ 
			temp = temp->next; 
		} 
		temp->next = t; 
		t->prev = temp; 
		t->next = NULL; 
	} 
} 
  
void display() 
{ 
	temp=head; 
	if(temp==NULL) 
	    printf("List is empty\n"); 
	else 
	{ 
		while(temp!=NULL) 
		{ 
			printf("%d ",temp->data); 
			temp = temp->next; 
		} 
		printf("\n\n");
	} 
} 