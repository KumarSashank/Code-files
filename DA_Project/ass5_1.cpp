#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *insert(struct node *, int);
struct node *del(struct node *, int);
struct node *minimum(struct node *);
void display(struct node *);
int search(struct node *, int);
int main()
{
    struct node *root = NULL;
    int data, choice, flag = 0;
    do
    {

        cout << "1.insert\n2.display inorder\n3.del\n4.search\n5.exit\n";
        cout << "enter your choice\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter the value in the node:";
            cin >> data;
            root = insert(root, data);
            break;
        case 2:
            if (root == NULL)
            {
                cout << "empty tree" << endl;
            }
            else
                display(root);
            break;

        case 3:
            if (root == NULL)
            {
                cout << "empty tree" << endl;
            }
            else
                cout << "enter element to del:" << endl;
            cin >> data;
            root = del(root, data);
            break;
        case 4:
            if (root == NULL)
            {
                cout << "empty tree" << endl;
            }
            else
            {
                cout << "enter the element:";
                cin >> data;
                flag = search(root, data);
                if (flag)
                {
                    cout << "data found" << endl;
                }
                else
                {
                    cout << "data not found" << endl;
                }
            }
            break;
        case 5:
            cout << "thank you" << endl;
            exit(0);
        default:
            cout << "enter valid option" << endl;
        }
    } while (choice);
}

struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    {
        root = (struct node *)malloc(sizeof(struct node));
        root->prev = root->next = NULL;
        root->data = data;
        cout << "node inserted" << endl;
    }
    else
    {
        if (data < root->data)
        {
            root->next = insert(root->next, data);
        }
        else if (data > root->data)
        {
            root->prev = insert(root->prev, data);
        }
        else
            cout << "duplicate entry" << endl;
    }
    return root;
}
void display(struct node *root)
{
    if (root == NULL)
        return;
    display(root->next);

    cout << root->data << "\t";
    display(root->prev);
}

struct node *del(struct node *root, int data)
{
    struct node *p;
    if (root == NULL)
    {
        cout << "empty tree" << endl;
    }
    else if (data < root->data)
    {
        root->next = del(root->next, data);
    }
    else if (data > root->data)
    {
        root->prev = del(root->prev, data);
    }
    else if (root->next != NULL && root->prev != NULL)
    {
        p = minimum(root->prev);
        root->data = p->data;
        root->prev = del(root->prev, root->data);
        cout << "node deleted" << endl;
    }
    else
    {
        p = root;
        if (root->next == NULL)
        {
            root = root->prev;
            cout << "node deleted" << endl;
        }
        else if (root->prev == NULL)
        {
            root = root->next;
            cout << "node deleted" << endl;
        }
    }
    return root;
}
struct node *minimum(struct node *root)
{
    if (root == NULL)
        return 0;
    else if (root->next == NULL)
    {
        return root;
    }
    else
        return minimum(root->next);
}
int search(struct node *root, int data)
{
    while (root != NULL)
    {
        if (data > root->data)
        {
            return search(root->prev, data);
        }
        else if (data < root->data)
        {
            return search(root->next, data);
        }
        else
        {
            return 1;
        }
    }
    return 0;
}