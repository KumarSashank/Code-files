#include <stdio.h>
void swap(int *, int *);
int main()
{
    int v1, v2;
    scanf("%d%d", &v1, &v2);
    swap(&v1, &v2);
    printf("%d %d", v1, v2);
    return 0;
}
//implement the function swap here
void swap(int *v1, int *v2)
{
    int temp, a, b;
    temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}