#include<stdio.h>
#include<stdlib.h>

typedef struct Nodes
{
   int data;
   struct Nodes *right;
   struct Nodes *left;
}node;

node *insert(int);

int count=1;

int main()
{
   int n,choice;
   node *root;
   printf("1.To insert\n");
   printf("2.Display preorder\n");
   printf("3.exit\n");
   printf("Select ur choice: ");
   scanf("%d",&choice);

   do
   {
      switch(choice)
      {
      case 1: printf("Enter the number: ");
              scanf("%d",&n);
              count++;
              insert(n);
      case 2: printf("Display the nodes: ");
              root=insert(n);
              
      default: printf("Select valid choice: ");
      }
   }while(choice!=3);
}

node* insert(int n)
{
   node *child;
   child=(node*)malloc(sizeof(node));
   if (count==1)
   {
       child->data=n;
   }
   else if (n>child->data)
   {
      child->left=insert(n);
   }
   else
   {
      child->right=insert(n);
   }
   return child;
}