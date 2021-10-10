#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i;
    FILE *file;
    file = fopen("k.txt", "w");
    for (i = 0; i < 1000; i++)
    {
        x = rand();
        fprintf(file, "%d\n", x);
    }
    printf("File Created");
}