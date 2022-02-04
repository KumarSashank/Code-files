#include <stdio.h>

void main()
{
    char ch;
    char time[12];
    int count = 0;
    do
    {
        printf("Enter T to enter the time\n");
        printf("Enter Q to quit the program\n");
        scanf("%c", &ch);
        switch (ch)
        {
        case 'T':
        case 't':
            printf("enter the time\n");
            scanf("%s", time);
            if (time[0] <= '2' && time[1] <= '4')
            {
                if (time[2] == '/')
                {
                    if ((time[3] <= '5' && time[4] <= '9') || (time[3] == '6' && time[4] == '0'))
                    {
                        if (time[5] == '/')
                        {
                            if ((time[6] <= '5' && time[7] <= '9') || (time[6] == '6' || '0' && time[7] == '0'))
                            {
                                if (time[8] == '/')
                                {
                                    if ((time[9] == 'A' || time[9] == 'P') && time[10] == 'M')
                                        count++;
                                }
                            }
                        }
                    }
                }
            }
            if (count == 1)
                printf("TRUE\n");
            else
                printf("FALSE\n");
            break;
        case 'Q':
        case 'q':
            printf("Thank you\n");
            break;
        }
    } while (ch != 'Q' || ch != 'q');
}