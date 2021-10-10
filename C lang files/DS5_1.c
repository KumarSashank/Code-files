#include<stdio.h> 
#include<stdlib.h> 
  
struct node 
{ 
	int data; 
	struct node *prev; 
	struct node *next; 
}; 
  
void list(); 
void display(); 
  
struct node *head; 
  
int main() 
{ 
	head=NULL; 
	list(); 
	display(); 
} 
  
void list() 
{ 
	int i,n; 
	struct node *temp,*t; 
	printf("Enter the no.of elements:"); 
	scanf("%d",&n); 
	 
	for(i=0;i<n;i++) 
	{ 
		if(i==0) 
		{ 
			head = (struct node*)malloc(sizeof(struct node)); 
            head->prev=NULL; 
            temp = head; 
        } 
        else 
		{ 
            t = (struct node*)malloc(sizeof(struct node)); 
            temp->next=t; 
            t->prev=temp; 
            temp=t; 
        } 
        scanf("%d",&temp->data); 
    } 
    temp->next = NULL; 
} 
  
void display () 
{ 
    struct node *t; 
    int count=1;
    for(t = head; t!= NULL; t = t->next) 
    { 
        printf ("\nThe data in node %d is %d", count,t->data); 
        count++;
    } 
    
} 