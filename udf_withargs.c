#include <stdio.h>

int addTwoNumber();

int main()
{

    printf("sum is %d", addTwoNumber());
}

int addTwoNumber()
{

    int num1, num2, total;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    total = num1 + num2;
    return (total);
}