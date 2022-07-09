#include <stdio.h>

void printTwoNum(int num1, int num2);

void main()

{
    int num1, num2;
    printTwoNum(num1, num2);
}

void printTwoNum(int a, int b)
{

    printf("Enter first number :");
    scanf("%d", &a);

    printf("Enter second number : ");
    scanf("%d", &b);

    printf("number1 is %d and number2 is %d", a, b);
}