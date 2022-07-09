#include <stdio.h>

int addTwoNumber(int a, int b);

int main()
{

    int a, b, sum; // dynamic
    // int a=10,b=20,sum; //static

    printf("Enter First Values: ");
    scanf("%d", &a);

    printf("Enter Second Values: ");
    scanf("%d", &b);

    sum = addTwoNumber(a, b);

    printf("Sum is : %d", sum);

    return (0);
}

int addTwoNumber(int a, int b)
{
    int sum = a + b;
    return sum;
}