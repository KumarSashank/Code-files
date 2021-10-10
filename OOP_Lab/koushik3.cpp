#include <iostream>
using namespace std;
void Search(int[], int, int);
int main()
{
    int A[100];
    int num, i, key;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the array elements: ";
    for (i = 0; i < num; i++)
    {
        cin >> A[i];
    }
    Search(A, 0, num - 1);
}
void Search(int A[], int low, int high) //111111111111100000
{
    if (low <= high)
    {
        int mid;
        mid = (low + high) / 2;
        if (A[mid] == 1 && A[mid + 1] == 0)
        {
            cout << "Index:" << (mid);
            return;
        }
        else
        {

            if (A[mid] == 0 && A[mid + 1] == 0)
            {
                Search(A, low, mid);
            }
            else
            {
                Search(A, mid + 1, high);
            }
        }
    }
}