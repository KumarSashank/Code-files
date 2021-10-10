#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
// Queue.....
 void Enqueue(int);
 int Dequeue();
 void Display();
 
  int Q[SIZE],fr=-1,re=-1;

int main() 
{
	int choice,num;
	do
	{
		printf("1.Enter an element: \n");
		printf("2.Delete an element: \n");
		printf("3.Display the Queue: \n");
		printf("4.Quit\n");
		printf("Enter your choice: \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				   printf("Enter the element: \n");
				   scanf("%d",&num);
				   Enqueue(num);
				   break;
			case 2:
				   num=Dequeue();
				   if(num!=-98)
				   {
				   
				   printf("The popped element:%d",num);
			}
				   break;
			case 3:
				   Display();
				   break;
				   
			default:
				 printf("Enter a valid choice..");
				 
		}
	}while(choice!=4);
}

  void Enqueue(int num)
  {
  	if(re==SIZE-1)
  	{
  		printf("Queue Overflow...\n");
	  }
	  else if(fr==-1 && re==-1)
	  {
	  	fr++;
	  	re++;
	  	Q[re]=num;
	  }
	  else
	  {
	  	re++;
	  	Q[re]=num;
	  }
	  
  }
  
  int Dequeue()
  {
  	int n;
  	if(fr==-1 && re==-1)
  	{
  		printf("Queue underflow...\n");
  		return -98;
	  }
	  else if(fr==re)
	  {
	  	 n=Q[fr];
	  	 fr=0;
	  	 re=0;
	  	 return n;
	  }
	else
	{
		n=Q[fr];
		fr++;
		return n;
	}
  }
  
  void Display()
  {
  	int i;
  	if(fr==-1 && re==-1)
  	{
  		printf("The Queue is empty\n");
  		
	  }
	  else
	  {
	  
  	for(i=fr;i<=re;i++)
  	{
  		printf("%d\n",Q[i]);
	  }
}
  }