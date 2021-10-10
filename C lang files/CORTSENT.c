#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int t,i,k[10],j=0,p,q=0,s=0;
    scanf("%d",&t);
    char st[t][10][10];
    for(i=0;i<t;i++)
    {
        scanf("%d",&k[i]);
        for(j=0;j<k[i];j++)
        {
            scanf("%s",st[i][j]);
        }
    }

    for(i=0;i<t;i++)
    {
        for(j=0;j<k[i];j++)
        {
            for(p=0;p<strlen(st[i][j]);p++)
            {
                if((st[i][j][p]>='a'&&st[i][j][p]<='m')||(st[i][j][p]>='N'&&st[i][j][p]<='Z'))
                {
                    q=q+1;
                }
                  
            }
            s=s+strlen(st[i][j]);
        }
        if (q==s)
            {
                printf("YES");
                q=0;
            }
            else
            {
                printf("NO");
                q=0;
            }
    }
}