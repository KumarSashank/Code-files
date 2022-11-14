#include <stdio.h>

int main()
{
    int windowSize, sent = 0, ack, i;
    printf("Enter window size: ");
    scanf("%d", &windowSize);
    while (1)
    {
        for (i = 0; i < windowSize; i++)
        {
            printf("frame %d has been transmitted\n", sent);
            sent++;
            if (sent == windowSize)
            {
                break;
            }
            printf("Enter the last acc received\n");
            scanf("%d", &ack);
            if (ack == windowSize)
            {
                break;
            }
            else
            {
                sent = ack;
            }
        }
    }
    return 0;
}