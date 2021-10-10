#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int hour, minute, second, count = 0, ch;
    char meridian[100];
    char menu;
    do
    {
        printf("Press 'T' or 't' to enter the time.\n");
        printf("Press 'Q' or 'q' to exit.\n");
        printf("Enter your choice:");
        scanf("%c", &menu);
        if (menu == 't' || menu == 'T')
        {
            ch = 1;
        }
        else if (menu == 'q' || menu == 'Q')
        {
            ch = 2;
        }
        else
        {
            ch = 3;
        }
        switch (ch)
        {
        case 1:
            printf("Please the enter the time in this format HH/MM/SS/AM or PM\n");
            printf("Enter the time:");
            scanf("%d/%d/%d/", &hour, &minute, &second);
            scanf("%s", meridian);
            if (hour < 24 && hour >= 0)
            {
                count++;
            }
            if (minute >= 0 && minute < 60)
            {
                count++;
            }
            if (second >= 0 && second < 60)
            {
                count++;
            }
            int am = strcmp(meridian, "AM");
            int pm = strcmp(meridian, "PM");
            if (am == 0 && hour < 12)
            {
                count++;
            }
            else if (pm == 0 && hour >= 12)
            {
                count++;
            }
            if (count == 4)
            {
                printf("True\n");
            }
            else
            {
                printf("False\n");
            }

            break;
        case 2:
            printf("Exited\n");
            exit(0);
            break;
        default:
            printf("Please enter valid choice");
        }
    } while (ch != 2);
}