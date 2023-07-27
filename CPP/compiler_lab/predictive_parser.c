// predictive parser program note: epsilon is denoted by 'e' and sample production is E->+TE|e
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char fin[10][20], st[10][20], ft[20][20], fol[20][20];
    int a = 0, e, i, t, b, c, n, k, l = 0, j, s, m, p;
    printf("enter the no. of productions\n");
    scanf("%d", &n);
    printf("enter the productions in a grammar\n");
    for (i = 0; i < n; i++)
        scanf("%s", st[i]);
    for (i = 0; i < n; i++)
        fol[i][0] = '\0';
    for (s = 0; s < n; s++)
    {
        for (i = 0; i < n; i++)
        {
            j = 3;
            l = 0;
            a = 0;
        l1:
            if (!((st[i][j] > 64) && (st[i][j] < 91)))
            {
                for (m = 0; m < l; m++)
                {
                    if (ft[i][m] == st[i][j])
                        goto s1;
                }
                ft[i][l] = st[i][j];
                l = l + 1;
            s1:
                j = j + 1;
            }
            else
            {
                if (s > 0)
                {
                    while (st[i][j] != st[a][0])
                    {
                        a++;
                    }
                    b = 0;
                    while (ft[a][b] != '\0')
                    {
                        for (m = 0; m < l; m++)
                        {
                            if (ft[i][m] == ft[a][b])
                                goto s2;
                        }
                        ft[i][l] = ft[a][b];
                        l = l + 1;
                    s2:
                        b = b + 1;
                    }
                }
            }
            while (st[i][j] != '\0')
            {
                if (st[i][j] == '|')
                {
                    j = j + 1;
                    goto l1;
                }
                j = j + 1;
            }
            ft[i][l] = '\0';
        }
    }
    printf("first pos\n");
    for (i = 0; i < n; i++)
        printf("FIRS[%c]=%s\n", st[i][0], ft[i]);
    fol[0][0] = '$';
    for (i = 0; i < n; i++)
    {
        k = 0;
        j = 3;
        if (i == 0)
            l = 1;
        else
            l = 0;
    k1:
        while ((st[i][0] != st[k][j]) && (k < n))
        {
            if (st[k][j] == '\0')
            {
                k++;
                j = 2;
            }
            j++;
        }
        j = j + 1;
        if (st[i][0] == st[k][j - 1])
        {
            if ((st[k][j] != '|') && (st[k][j] != '\0'))
            {
                a = 0;
                if (!((st[k][j] > 64) && (st[k][j] < 91)))
                {
                    for (m = 0; m < l; m++)
                    {
                        if (fol[i][m] == st[k][j])
                            goto q3;
                    }
                    fol[i][l] = st[k][j];
                    l++;
                q3:
                    p++;
                }
                else
                {
                    while (st[k][j] != st[a][0])
                    {
                        a++;
                    }
                    p = 0;
                    while (ft[a][p] != '\0')
                    {
                        if (ft[a][p] != 'e')
                        {
                            for (m = 0; m < l; m++)
                            {
                                if (fol[i][m] == ft[a][p])
                                    goto q2;
                            }
                            fol[i][l] = ft[a][p];
                            l = l + 1;
                        }
                        else
                            e = 1;
                    q2:
                        p++;
                    }
                    if (e == 1)
                    {
                        e = 0;
                        goto a1;
                    }
                }
            }
            else
            {
            a1:
                c = 0;
                a = 0;
                while (st[k][0] != st[a][0])
                {
                    a++;
                }
                while ((fol[a][c] != '\0') && (st[a][0] != st[i][0]))
                {
                    for (m = 0; m < l; m++)
                    {
                        if (fol[i][m] == fol[a][c])
                            goto q1;
                    }
                    fol[i][l] = fol[a][c];
                    l++;
                q1:
                    c++;
                }
            }
            goto k1;
        }
        fol[i][l] = '\0';
    }
    printf("follow pos\n");
    for (i = 0; i < n; i++)
        printf("FOLLOW[%c]=%s\n", st[i][0], fol[i]);
    printf("\n");
    return 0;
}
/*output
enter the productions in a grammar
E->TD
D->+TD|e
T->FG
G->*FG|e
F->(E)|i
first pos
FIRS[E]=(i
FIRS[D]=+e
FIRS[T]=(i
FIRS[G]=*e
FIRS[F]=(i
follow pos
FOLLOW[E]=$)
FOLLOW[D]=$)
FOLLOW[T]=+$)
FOLLOW[G]=+$)
FOLLOW[F]=*+$)

M[E,(]=E->TD
M[E,i]=E->TD
M[D,+]=D->+TD
M[D,$]=D->e
M[D,)]=D->e
M[T,(]=T->FG
M[T,i]=T->FG
M[G,*]=G->*FG
M[G,+]=G->e
M[G,$]=G->e
M[G,)]=G->e
M[F,(]=F->(E)
M[F,i]=F->i
*/