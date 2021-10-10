#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    printf("Enter two numbers :");
    scanf("%f %f", &num1, &num2);
    printf("Sum of 2 numbers : %.f\n", num1 + num2);
    printf("Difference of two numbers : %.f\n", num1 - num2);
    printf("Product of two numbers : %.f\n", num1 * num2);
    printf("Division of two numbers : %f\n", num1 / num2);
}