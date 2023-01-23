#include <stdio.h>

int main()
{

    int a, b, det = 1;

    double m[20][20];
    printf("Enter size of matrix:");
    scanf("%d", &a);
    b = a + 1;
    printf("enter matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        double x = m[i][i];
        int n = i;
        if (x == 0)
        {
            for (int l = i + 1; i < a; i++)
            {
                if (m[l][i])
                {
                    n = l;
                    break;
                }
            }
            for (int l = 0; l < a && n != i; l++)
            {
                double h = m[i][l];
                m[i][l] = m[n][l];
                m[n][l] = h;
            }
        }
        if (n == i && !m[i][i])
        {
            continue;
        }
        for (int j = i + 1; j < a; j++)
        {
            double y = m[j][i];
            for (int k = i; k < b; k++)
            {
                m[j][k] = m[j][k] - (y / x) * m[i][k];
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        double x = m[i][i];
        int n = i;
        if (x == 0)
        {
            for (int l = i + 1; i < a; i++)
            {
                if (m[l][i])
                {
                    n = l;
                    break;
                }
            }
            for (int l = 0; l < a && n != i; l++)
            {
                double h = m[i][l];
                m[i][l] = m[n][l];
                m[n][l] = h;
            }
        }
        if (n == i && !m[i][i])
        {
            continue;
        }
        if (x)
        {
            for (int j = 0; j < i; j++)
            {
                double y = m[j][i];
                for (int k = i; k < b; k++)
                {
                    m[j][k] = m[j][k] - (y / x) * m[i][k];
                }
            }
        }
    }
    printf("\nEchlon form:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%.2lf ", m[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < a; i++)
    {
        det *= m[i][i];
    }
    printf("\n");
    for (int i = 0; i < a; i++)
        if (m[i][i] != 0)
        {
            for (int j = 0; j < b; j++)
            {
                if (i != j && m[i][j])
                    m[i][j] = m[i][j] / m[i][i];
            }
            m[i][i] = 1;
        }
    printf("\nreduced matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%.2lf ", m[i][j]);
        }
        printf("\n");
    }
    int p = 0, q = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b - 1; j++)
        {
            if (m[i][j])
            {
                p++;
                break;
            }
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (m[i][j])
            {
                q++;
                break;
            }
        }
    }
    printf("\n");
    printf("determinant:%d", det);
    printf("\nsolution: ");
    if (p == q && p == a)
    {
        printf("Unique solution\n");
        for (int i = 0; i < a; i++)
        {
            printf("x[%d] = %.2lf\n", i + 1, m[i][a]);
        }
    }
    else if (p == q && p < a)
        printf("Infinite solution\n");
    else
        printf("No solution\n");
    printf("\n");
}
