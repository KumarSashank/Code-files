#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int i, j;
    printf("Enter a word: ");
    scanf("%s", word);

    for (i = strlen(word) - 1; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", word[j]);
        }
        printf("\n");
    }
    for (i = 1; i <strlen(word); i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%c", word[j]);
        }
        printf("\n");
    }
    return 0;
}
