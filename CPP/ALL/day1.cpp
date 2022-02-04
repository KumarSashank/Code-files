#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int *ptr = &num;
    cout << "Enter";
    cin >> num;
    cout << num << "\n";
    cout << "Kumar";
    cout << "The num " << num << " is nothing\n";
    string st = "Kumar";
    string *ptr2 = &st;
    string reverse = st;
    int len = st.length();
    for (int i = 0; i < len; i++)
    {
        reverse[i] = st[len - i - 1];
    }
    cout << reverse;
    cout << ptr << "\n";
    cout << ptr2 << "\n";
}