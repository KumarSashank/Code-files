#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *leftnode;
  struct node *rightnode;
};
struct node *insert (struct node *,int);
void inorder();
struct node * delete(struct node *,int);
void minimum_value();
void maximum_value();
int main()
{
  struct node *root=NULL;
  int data,choice;
  do
    {
      printf("1.Insert\n");
      printf("2.Display Inorder\n");
      printf("3.Delete a node\n4.Find the minimum value in the tree\n");
      printf("5.Maximum value in the tree\n6.Exit\n");
      printf("Select option: ");
      scanf("%d",&choice);
      switch(choice)
    {
    case 1:printf ("Enter the value: ");
           scanf ("%d", &data);
           root=insert(root,data);
           break;
    case 2:if(root==NULL)
           {
                printf("The tree is empty\n");
           }
        else
            inorder(root);
           break;
    case 3:printf("Enter the element:");
           scanf("%d",&data);
           root=delete(root,data);
           break;
    case 4:minimum_value(root);
           break;
    case 5:maximum_value(root);
           break;
    case 6:printf("Exited\n");
           break;
    default:printf ("Select valid option.\n");
    }
    }
  while (choice!=6);

}

struct node *insert(struct node *root,int data)
{
  if (root == NULL)
    {
        root =(struct node *) malloc(sizeof(struct node));
        root->rightnode=root->leftnode=NULL;
        root->data=data;
        printf("The node is inserted\n");
    }
    else
    {
        if(data<root->data)
        {
            root->leftnode=insert(root->leftnode,data);
        }
        else if(data>root->data)
        {
             root->rightnode=insert(root->rightnode,data);
        }
        else
        printf("Entered already\n");
    }
    return root;
}
void inorder(struct node *root)
{
    if (root==NULL)
    return;
    inorder(root->leftnode);
    printf ("%d\t",root->data);
    inorder(root->rightnode);
}
void minimum_value(struct node *root)
{
    while(root->leftnode!= NULL) 
    {
        root=root->leftnode;
    }
    printf("The minimum value in the tree is %d\n",root->data);
}
void maximum_value(struct node *root)
{
    while(root->rightnode!=NULL)
    {
        root=root->rightnode;
    }
    printf("The maximum value in the tree is %d\n",root->data);
}
struct node *delete(struct node *root,int data)
{
    struct node *p;
    if(root==NULL)
    {
        printf("The tree is empty\n");
    }
    else if(data < root->data)
    {
        root->leftnode=delete(root->leftnode,data);
    }
    else if(data > root->data)
    {
        root->rightnode=delete(root->rightnode,data);
    }
    else if(root->leftnode!=NULL&&root->rightnode!=NULL)
    {
        minimum_value(root->rightnode);
        p=root->rightnode;
        root->data=p->data;
        root->rightnode=delete(root->rightnode,root->data);
        printf("Node deleted\n");
    }
    else
    {
        p=root;
        if(root->leftnode==NULL)
        {
            root=root->rightnode;
            printf("Node deleted\n");
        }
        else if(root->rightnode==NULL)
        {
            root=root->leftnode;
            printf("Node deleted\n");
        }
        else
        {
            printf("Node not found\n");
        }
    }
    return root;
}