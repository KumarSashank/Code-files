#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *leftnode;
    struct node *rightnode;
}Node;
Node* Insert(Node*,int);
Node* Search(Node*,int);
void Preorder(Node*);
void Inorder(Node*);
void Postorder(Node*);
int main()
{
    Node *root=NULL;
    int choice,num;

    do
    {
        printf("\n1.Insert\n2.Search\n");
        printf("3.Display\n4.Exit\n\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("Enter the element to be inserted : ");
                    scanf("%d",&num);
                    root=Insert(root,num);
                    printf("%d is Inserted in BST\n",num);
                    break;
            
            case 2: printf("Enter the element to be searched : ");
                    scanf("%d",&num);
                    root=Search(root,num);

                    if(root)
                        printf("\nElement %d is found\n",num);
                    else
                        printf("\nElement not found\n");
                    
                    break;
            
            case 3: if(root == NULL)
                        printf("\nTree is empty\n"); 

                    else
                    {
                        printf("\nPreorder -traversal : ");
                        Preorder(root);
                        printf("\nInorder - traversal : ");
                        Inorder(root);
                        printf("\nPostorder traversal : ");
                        Postorder(root);
                        printf("\n");
                    }
                    break;
            case 4: break;
            
            default: printf("\nEnter valid option\n");
        }
    }while(choice!=4); 
}   

Node* Search(Node* root,int num)
{
    if(root==NULL)
        printf("\nTree is empty\n");    

    else 
    {
        while(root)
        {
            if(num == root->data)
                return root;
            
            else if(num> root->data)
                root=root->rightnode;
            
            else
                root=root->leftnode;
        }
    }
    return NULL;
}


Node* Insert(Node *root,int num)
{ 
    if(root==NULL)
    {
        root=(Node*)malloc(sizeof(Node));
        root->leftnode=root->rightnode=NULL;
        root->data=num;
    }

    else
    {
        if(num > root->data)
            root->rightnode=Insert(root->rightnode,num);
    
        else 
            root->leftnode=Insert(root->leftnode,num);
    }       

    return root;
}

void Preorder(Node *root)
{
    if(root)
    {
        printf("%d\t",root->data);
        Preorder(root->leftnode);
        Preorder(root->rightnode);
    }
}

void Inorder(Node *root)
{
    if(root)
    {
        Inorder(root->leftnode);
        printf("%d\t",root->data);
        Inorder(root->rightnode);    
    }
}

void Postorder(Node *root)
{
    if(root)
    {
        Postorder(root->leftnode);
        Postorder(root->rightnode);
        printf("%d\t",root->data);    
    }
}