#include<stdio.h> 
#include<stdlib.h> 
  
typedef struct node 
{ 
	int data; 
	struct node *next; 
	struct node *prev; 
}node; 
  
void insert(); 
  
node *head,*t,*temp; 
int n,x; 
void main() 
{ 
	x=1; 
	insert(); 
	int key; 
	printf("Enter the element to be searched: "); 
	scanf("%d",&key); 
	t=head; 
	while(t->next!=NULL) 
	{ 
		if(t->data==key) 
		{ 
			printf("The element %d is found at %d position\n",key,x); 
			x++; 
			break; 
		} 
		else 
		{ 
			t=t->next; 
			x++; 
		} 
	} 
	if(t->next==NULL&&t->data!=key) 
	{ 
		printf("Element is not found in the list\n"); 
	} 
} 
  
void insert() 
{ 
	printf("Enter the no.of elements: "); 
	scanf("%d",&n); 
	int i; 
	for(i=0;i<n;i++) 
	{ 
		if(i==0) 
		{ 
			head = (node*)malloc(sizeof(node)); 
            head->prev=NULL; 
            temp = head; 
        } 
        else 
		{ 
            t = (node*)malloc(sizeof(node)); 
            temp->next=t; 
            t->prev=temp; 
            temp=t; 
        } 
        scanf("%d",&temp->data); 
    } 
    temp->next = NULL; 
} 