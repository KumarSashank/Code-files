#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    time_t t;
    time(&t);
    cout << "Date and time : " << ctime(&t) << endl;
}