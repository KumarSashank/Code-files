#include <stdio.h>

int isUnique(char *str)
{
    int i, j;
    int length = 0;

    // Calculate the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    // Compare each character with the remaining characters
    for (i = 0; i < length - 1; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (str[i] == str[j])
            {
                return 0; // Duplicate character found
            }
        }
    }

    return 1; // All characters are unique
}

int main()
{
    char str[1000];
    printf("Enter the string: ");
    scanf("%s", str);

    int result = isUnique(str);

    if (result == 1)
    {
        printf("The string has all unique characters\n");
    }
    else
    {
        printf("The string has duplicate characters\n");
    }

    return 0;
}
