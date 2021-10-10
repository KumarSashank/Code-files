#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    int *next;
} node;
node *head[10] = {NULL}, *temp;

void insert(int num)
{
    int index;
    index = num % 10;
    node *newnode = (node *)malloc(sizeof(node));
    newnode->data = num;
    newnode->next = NULL;
    if (head[index] == NULL)
        head[index] = newnode;
    else
    {
        temp = head[index];
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("\nentries at index %d\n", i);
        if (head[i] == NULL)
        {
            printf("No Hash Entry");
        }
        else
        {
            for (temp = head[i]; temp != NULL; temp = temp->next)
                printf("%d->", temp->data);
        }
    }
}
void search(int number)
{
    int index;
    index = number % 10;
    if (head[index] == NULL)
        printf("\n Search element not found\n");
    else
    {
        for (temp = head[index]; temp != NULL; temp = temp->next)
        {
            if (temp->data == number)
            {
                printf("search element found\n");
                break;
            }
        }
        if (temp == NULL)
            printf("\n Search element not found\n");
    }
}
int main()
{
    int choice, num, number;
    do
    {
        /* code */
        printf("1.Insert\n2.Display\n3.Search\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number: ");
            scanf("%d", &num);
            insert(num);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Enter the element to search: ");
            scanf("%d", &number);
            search(number);
            break;
        case 4:
            exit(0);
            break;
        }
    } while (choice != 4);
}
