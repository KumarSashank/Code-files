#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    FILE *file;
    file = fopen("1000.txt", "w");
    for (i = 0; i < 1000; i++)
    {
        x = rand();
        fprintf(file, "1000.txt", x);
    }
}