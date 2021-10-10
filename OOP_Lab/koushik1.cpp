#include <iostream>
using namespace std;
void Search(int[], int, int);
int main()
{
    int num;
    cin >> num;
    int A[num];
    for (int i = 0; i < num; i++)
        cin >> A[i];
    Search(A, 0, num - 1);
}
void Search(int A[], int low, int high)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if ((A[mid - 1] < A[mid]) && (A[mid] > A[mid + 1]))
        {
            cout << "The Pivot is Founded at index=" << mid << "  "
                 << "The Element is:" << A[mid];
            return;
        }
        else
        {
            if (A[mid - 1] < A[mid] < A[mid + 1])
            {
                Search(A, mid, high);
            }
            else if (A[mid - 1] > A[mid] > A[mid + 1])
            {
                Search(A, low, mid);
            }
        }
    }
}