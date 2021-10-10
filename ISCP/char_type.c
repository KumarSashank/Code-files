#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    int check = islower(ch);
    if (check == 0)
    {
        printf("%c", tolower(ch));
    }
    else
    {
        printf("%c", toupper(ch));
    }
}