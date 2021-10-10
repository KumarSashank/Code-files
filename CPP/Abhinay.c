//Program to check time format given by the user.
//AP20110010221

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int hh, mm, ss;
    char ch;
    char s[2];

    do
    {
        printf("\n1.T\n2.Q\nEnter your choice: ");
        scanf("%c", &ch);

        switch (ch)
        {
        case 'T':
            printf("\nEnter the time format in hh/mm/ss/AM or PM :  ");
            scanf("%d/%d/%d/", &hh, &mm, &ss);
            scanf("%s", s);

            if ((hh >= 0 && hh < 24) && (mm >= 0 && mm < 60) && (ss >= 0 && ss < 60))
            {
                if (hh >= 0 && hh < 12)
                {

                    if (strcmp(s, "AM") == 0)
                        printf("\nTRUE");
                    else
                        printf("\nFalse");
                }
                else
                {
                    if (strcmp(s, "PM") == 0)
                        printf("\nTRUE");
                    else
                        printf("\nFALSE");
                }
            }

            else
            {
                printf("\nFalse");
            }

            break;

        case 'Q':
            printf("\nThank you.....!!!\n");
            exit(0);
            break;

        default:
            printf("\nEnter correct input!!!!");
            break;
        }
    } while (ch != 'Q');

    return 0;
}