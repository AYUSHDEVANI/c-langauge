#include <stdio.h>

int main()
{
    float num1;
    double num2;

    printf("Enter a number:");
    scanf("%f", &num1);
    printf("Enter an another number:");
    scanf("%lf", &num2);

    printf("number1 = %f\n", num1);
    printf("number2 = %lf", num2);

    return 0;
}