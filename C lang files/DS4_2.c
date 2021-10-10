#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int num;
	struct node *next;
}Node;
void insert();
int first();
int middle();
int last();
void display();
Node *head,*temp,*t;
int x,n,pos,count;
int main()
{
    int choice;
	printf("Enter the size of list:-  ");
	scanf("%d",&n);
	printf("Enter the elements:- ");
	insert();
	printf("The elements are:- ");
	display();
	printf("DELETE OPERATIONS\n\n");
	do
	{
	    printf("1.Delete at the Beginning\n");
	    printf("2.Delete at the Middle\n");
	    printf("3.Delete at the end\n");
	    printf("4.Quit\n");
	    printf("Enter your choice: ");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1 :
	    	x=first();
	    	printf("The deleted element: %d\n",x);
	    	printf("The elements are:- ");
	    	display();
	    	         break;
	    	case 2 : 
	    	printf("Enter the position where the data to be deleted: ");
	        scanf("%d",&pos);
	    	x=middle();
	        printf("The deleted element: %d\n",x);
	    	printf("The elements are:-  ");
	    	display();
	    	         break;
	    	case 3 : x=last();
	    	printf("The deleted element: %d\n",x);
	    	printf("The elements are:- ");
	    	display();
	    	         break;
	    	case 4 : printf("End of the program\n");
	    	         break;
	        default : printf("Please select from 1 to 4 only\n"); 
		}
	}while(choice!=4);
}
void insert()
{
	count=0;
	head=NULL;
	while(count!=n)
	{
	    if(head==NULL)
	    {
	    	head = (Node*)malloc(sizeof(Node));
	    	scanf("%d",&head->num);
	    	temp = head;
	    	temp->next=NULL;
	    	count++;
	    }
	    else
	    {
	    	t = (Node*)malloc(sizeof(Node));
	    	scanf("%d",&t->num);
	    	temp->next = t;
	    	temp = temp->next;
	    	count++;
		}
		temp->next=NULL;
	}
}
int first()
{
	int t;
	t=head->num;
	temp=head;
	head = temp->next;
	free(temp);
	return t;
}
int middle()
{
	int y;
	count = 0;
	temp = head;
	while(temp!=NULL&&count == pos-1)
	{
		temp = temp->next;
		count++;
	}
		t=temp->next;
		y=temp->next->num;
		temp->next = t->next;
		temp = temp->next;
		free(t);
	return y;
}
int last()
{
	int y;
	temp=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		if(temp->next->next==NULL)
		break;
	}
	t=temp->next;
	y=t->num;
	temp->next=NULL;
	free(t);
	return y;
}
void display()
{
	count = 0;
	temp = head;
	while(temp!=NULL&&count<=n)
	{
		printf("%d\t",temp->num);
		temp=temp->next;
		count++;
	}
	printf("\n");
}