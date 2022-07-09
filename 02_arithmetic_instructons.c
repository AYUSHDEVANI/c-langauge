#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a=");
    scanf("%d", &a);
    int b = 8;
    int z;
    z = b * a;
    printf("The value of z is: %d\n", z);
    printf("The value of a + b is: %d\n", a + b);
    printf("The value of a - b is: %d\n", a - b);
    printf("The value of a * b is: %d\n", a * b);
    printf("The value of a / b is: %d\n", a / b);

    printf("5 when divided by 2 leaves a reminder of %d\n", 5 % 2);
    printf("-5 when divided by 2 leaves a reminder of %d\n", -5 % 2);
    printf("5 when divided by -2 leaves a reminder of %d\n", 5 % -2);

    return 0;
}