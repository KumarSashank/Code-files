#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *rnext;
	struct node *lnext;
}node;

node* insert(node*);
void display(node*);
node* del_beg(node*);
node* del_mid(node*);
node* del_end(node*);

node *temp,*t;
int n,num,choice,count;

void main()
{
	node *head=NULL;
	int x;
	printf("Enter the number of elements in the list:");
	scanf("%d",&n);
	head = insert(head);
	printf("The list elements are:\n");
	display(head);
	do
	{
		printf("Delete operations\n\n");
		printf("1.Delete at the beginning\n");
		printf("2.Delete at the middle\n");
		printf("3.Delete at the end\n");
		printf("4.Display\n5.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : head = del_beg(head);			         
			         break;
			         
			case 2 : head = del_mid(head);
			         break;
			         
			case 3 : head = del_end(head);
			         break;
			         
			case 4 : display(head);
			         break;
			         
			case 5 : printf("End of delete operations\n");
			         break;
			         
			default : printf("Enter a valid choice\n");
		}
	}while(choice!=5);
}

node* insert(node* head)
{
	int k;
	for(k=0;k<n;k++)
	{
		if(k==0)
		{
			head = (node*)malloc(sizeof(node));
            head->lnext=NULL;
            temp = head;
        }
        else
		{
            t = (node*)malloc(sizeof(node));
            temp->rnext=t;
            t->lnext=temp;
            temp=t;
        }
        scanf("%d",&temp->data);
    }
    temp->rnext = NULL;
    return head;
}

node* del_beg(node* head)
{
	int x;
	temp=head;
	x=temp->data;
	temp=temp->rnext;
	temp->lnext=NULL;
	head=temp;
	printf("The number deleted is %d",x);
	return head;
}

node* del_mid(node* head)
{
	int i=0;
	int x,pos;
	printf("Enter the position at which deletion to be performed: ");
	scanf("%d",&pos);
	if(pos==1)
	{
		head = del_beg(head);
	}
	else if(head == NULL)
	{
		printf("List empty.Deletion failed\n");
	}
	else
	{
		i=1;
		temp=head;
    	while(temp->rnext!=NULL&&i<pos-1)
	    {
	    	temp=temp->rnext;
    		i++;
	    }
	    if(i==pos-1)
	    {
    	    t=temp->rnext;
    	    x=t->data;
    	    temp->rnext=t->lnext;
    	    t->rnext->lnext=temp;
    	    free(t);
        	printf("The number deleted is %d",x);
        }
        else
            printf("Position not found\n");
    }
	return head;
}

node* del_end(node* head)
{
	temp=head;
	while(temp->rnext->rnext!=NULL)
	{
		temp=temp->rnext;
	}
	t=temp->rnext;
	
	return head;
}

void display(node* head)
{
	temp=head;
	if(temp==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->rnext;
		}
		printf("\n");
	}
}