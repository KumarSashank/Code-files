#include <iostream>
using namespace std;
int main()
{
    int size, temp, j;
    cout << "Enter the size of the list: ";
    cin >> size;
    int array[size];
    cout << "Enter the " << size << " elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++)
    {
        temp = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > temp)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}