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
void Search(int A[], int low, int high) //0000111111  //
{
    if (low <= high)
    {
        int mid;
        mid = (low + high) / 2;
        if (A[mid] == 0 && A[mid + 1] == 1)
        {
            cout << "Index:" << (mid + 1);
            return;
        }
        else
        {

            if (A[mid] == 0 && A[mid + 1] == 0)
            {
                Search(A, mid + 1, high);
            }
            else
            {
                Search(A, low, mid);
            }
        }
    }
}