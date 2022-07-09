#include <stdio.h>
int main()
{

    int i, total = 0, number;
    printf("Enter the value of number:");
    scanf("%d", &number);

    for (i = 1; i <= number; ++i)
    {
        total += i;
    }
    printf("total is %d\n", total);

    return 0;
}