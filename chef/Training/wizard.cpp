#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode
{
    int val;
    LinkedListNode *next;
};

LinkedListNode *_insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, int val)
{
    if (head == NULL)
    {
        head = (LinkedListNode *)(malloc(sizeof(LinkedListNode)));
        head->val = val;
        head->next = NULL;
        tail = head;
    }
    else
    {
        LinkedListNode *node = (LinkedListNode *)(malloc(sizeof(LinkedListNode)));
        node->val = val;
        node->next = NULL;
        tail->next = node;
        tail = tail->next;
    }
    return tail;
}

/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/
LinkedListNode *addLists(LinkedListNode *list1, LinkedListNode *list2)
{
    // add two linked lists

    LinkedListNode *dummy = (LinkedListNode *)(malloc(sizeof(LinkedListNode)));
    LinkedListNode *head;
    head = list1;
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = list2;
    return list1;
}

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path)
    {
        f = fopen(output_path, "w");
    }

    LinkedListNode *res;
    int list1_size = 0;

    LinkedListNode *list1 = NULL;
    LinkedListNode *list1_tail = NULL;

    scanf("%d\n", &list1_size);
    for (int i = 0; i < list1_size; i++)
    {
        int list1_item;
        scanf("%d", &list1_item);
        list1_tail = _insert_node_into_singlylinkedlist(list1, list1_tail, list1_item);

        if (i == 0)
        {
            list1 = list1_tail;
        }
    }

    int list2_size = 0;

    LinkedListNode *list2 = NULL;
    LinkedListNode *list2_tail = NULL;

    scanf("%d\n", &list2_size);
    for (int i = 0; i < list2_size; i++)
    {
        int list2_item;
        scanf("%d", &list2_item);
        list2_tail = _insert_node_into_singlylinkedlist(list2, list2_tail, list2_item);

        if (i == 0)
        {
            list2 = list2_tail;
        }
    }

    res = addLists(list1, list2);
    while (res != NULL)
    {
        fprintf(f, "%d", res->val);

        res = res->next;
    }

    fclose(f);
    return 0;
}
