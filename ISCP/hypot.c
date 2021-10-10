#include <stdio.h>
#include <math.h>
double hypotenuse(double base, double perp)
{
    double a = sqrt((base * base) + (perp * perp));
    return a;
}
int main()
{
    double A, B, C;
    scanf("%lf%lf", &A, &B);
    C = hypotenuse(A, B);
    printf("%.6lf", C);
    return 0;
}