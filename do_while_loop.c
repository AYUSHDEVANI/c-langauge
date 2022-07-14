#include <stdio.h>
int main()
{
    double number, sum = 0;


    do
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
    } while (number != 0.0);
    sum += number;

    printf("Sum = %.2lf", sum);

    return 0;
}
