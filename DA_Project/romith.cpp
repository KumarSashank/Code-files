#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *lnext;
    struct node *rnext;
};
struct node *insert(struct node *, int);
struct node *del(struct node *, int);
struct node *minimum(struct node *);
void display(struct node *);
void preorder(struct node *);
void postorder(struct node *);
int search(struct node *, int);
int main()
{
    struct node *root = NULL;
    int data, choice, flag = 0;
    do
    {
        cout << endl
             << "\t\t\tmenu" << endl;
        cout << "1.insert\n2.display inorder\n3.display preorder\n4.display postorder\n5.del\n6.search\n7.exit\n";
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
                preorder(root);
            break;
        case 4:
            if (root == NULL)
            {
                cout << "empty tree" << endl;
            }
            else
                postorder(root);
            break;
        case 5:
            if (root == NULL)
            {
                cout << "empty tree" << endl;
            }
            else
                cout << "enter element to del:" << endl;
            cin >> data;
            root = del(root, data);
            break;
        case 6:
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
        case 7:
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
        root->rnext = root->lnext = NULL;
        root->data = data;
        cout << "node inserted" << endl;
    }
    else
    {
        if (data < root->data)
        {
            root->lnext = insert(root->lnext, data);
        }
        else if (data > root->data)
        {
            root->rnext = insert(root->rnext, data);
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
    display(root->lnext);

    cout << root->data << "\t";
    display(root->rnext);
}
void preorder(struct node *root)
{

    if (root == NULL)
        return;
    cout << root->data << "\t";
    preorder(root->lnext);
    preorder(root->rnext);
}
void postorder(struct node *root)
{
    if (root == NULL)
        return;
    postorder(root->lnext);
    postorder(root->rnext);
    cout << root->data << "\t";
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
        root->lnext = del(root->lnext, data);
    }
    else if (data > root->data)
    {
        root->rnext = del(root->rnext, data);
    }
    else if (root->lnext != NULL && root->rnext != NULL)
    {
        p = minimum(root->rnext);
        root->data = p->data;
        root->rnext = del(root->rnext, root->data);
        cout << "node deleted" << endl;
    }
    else
    {
        p = root;
        if (root->lnext == NULL)
        {
            root = root->rnext;
            cout << "node deleted" << endl;
        }
        else if (root->rnext == NULL)
        {
            root = root->lnext;
            cout << "node deleted" << endl;
        }
    }
    return root;
}
struct node *minimum(struct node *root)
{
    if (root == NULL)
        return 0;
    else if (root->lnext == NULL)
    {
        return root;
    }
    else
        return minimum(root->lnext);
}
int search(struct node *root, int data)
{
    while (root != NULL)
    {
        if (data > root->data)
        {
            return search(root->rnext, data);
        }
        else if (data < root->data)
        {
            return search(root->lnext, data);
        }
        else
        {
            return 1;
        }
    }
    return 0;
}