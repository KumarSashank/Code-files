#include <iostream>
using namespace std;
int main()
{
    int number_of_lines;
    cout << "Enter the no.of lines: ";
    cin >> number_of_lines;
    int array[number_of_lines][number_of_lines];
    for (int i = 0; i < number_of_lines; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> array[i][j];
        }
    }
    for (int i = number_of_lines - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((array[i][j] + array[i + 1][j]) > (array[i][j] + array[i + 1][j + 1]))
                array[i][j] = array[i][j] + array[i + 1][j];
            else
                array[i][j] = array[i][j] + array[i + 1][j + 1];
        }
    }
    cout << "The largest sum  of the paths is " << array[0][0] << endl;
    return 0;
}