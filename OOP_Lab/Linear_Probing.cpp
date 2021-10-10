#include <iostream>
using namespace std;

void Creating_table(int num, int size, int *arr)
{
    int index, i;
    //Finding Index of the given number
    index = num % size;
    //Using for loop for incrementing index if array of respective index contains a number
    for (i = index; i < size; i++)
    {
        //Checking whether the array contains number or not
        if (arr[i] == 0)
        {
            arr[i] = num;
            break;
        }
    }
    if (i == size)
    {
        cout << "\nElement cannot be inserted";
    }
}
int main()
{
    int size, num, choice;
    do
    {
        /* code */
        cout << "1.Inser\n2.Display\n3.Search\n4.exit\nSelect a choice: ";
        cin >> choice;
        int arr[5];
        size = 5;
        switch (choice)
        {
        case 1:
            for (int i = 0; i < size; i++)
            {
                cout << "Insert the number: ";
                cin >> num;
                //Passing the number,size,and pointer array
                Creating_table(num, size, arr);
            }
            break;

        case 2:

            //Printing the hash table
            cout << "Hash Table\n";
            for (int i = 0; i < size; i++)
            {
                /* code */
                cout << arr[i] << " ";
            }
            break;
        case 3:
            int number;
            cout << "enter the number to search: ";
            cin >> number;
            for (int i = 0; i < size; i++)
            {
                /* code */
                if (number == arr[i])
                {
                    cout << "Element found";
                    break;
                }
            }
            break;
        case 4:
            exit(0);
        }
    } while (choice != 4);
}