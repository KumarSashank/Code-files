#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *lnextnode;
    struct node *rnextnode;
} node;
node *insert(node *, int);
void bfstraverse(struct node *);
void display();
void preorder();
void postorder();
int value, front = 0, rear = -1, i;
int q[30];
void main()
{
    node *root = NULL;
    int data, choice;
    do
    {
        printf("\n1.Insert");
        printf("\n2.Display using bfs");
        printf("\n3.Display using dfs");
        printf("\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:
            rear++;
            q[rear] = root->data;
            bfstraverse(root);
            for (i = 0; i <= rear; i++)
                printf("%d\t", q[i]);
            break;
        case 3:
            printf("Inorder:");
            display(root);
            printf("\nPreorder:");
            preorder(root);
            printf("\nPostorder:");
            postorder(root);
            break;
        case 4:
            exit(0);
        default:
            printf("Select valid option\n");
        }
    } while (choice != 4);
}
node *insert(node *root, int data)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->rnextnode = root->lnextnode = NULL;
        root->data = data;
        printf("%d Inserted Successfully\n", data);
    }
    else
    {
        if (data < root->data)
        {
            root->lnextnode = insert(root->lnextnode, data);
        }
        else if (data > root->data)
        {
            root->rnextnode = insert(root->rnextnode, data);
        }
        else
            printf("%d Already Number is inserted\n", data);
    }
    return root;
}
void display(node *root)
{
    if (root == NULL)
        return;
    display(root->lnextnode);
    printf("%d\t", root->data);
    display(root->rnextnode);
}
void preorder(node *root)
{
    if (root == NULL)
        return;
    printf("%d\t", root->data);
    preorder(root->lnextnode);
    preorder(root->rnextnode);
}
void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->lnextnode);
    postorder(root->rnextnode);
    printf("%d\t", root->data);
}
void bfstraverse(node *root)
{
    value = root->data;
    if ((front <= rear) && (root->data == q[front]))
    {
        if (root->lnextnode != NULL)
        {
            rear++;
            q[rear] = root->lnextnode->data;
        }
        if (root->rnextnode != NULL)
        {
            rear++;
            q[rear] = root->rnextnode->data;
            front++;
        }
    }
    if (root->lnextnode != NULL)
    {
        bfstraverse(root->lnextnode);
    }
    if (root->rnextnode != NULL)
    {
        bfstraverse(root->rnextnode);
    }
}