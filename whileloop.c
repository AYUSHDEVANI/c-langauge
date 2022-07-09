#include <stdio.h>

int main()
{
    int i = 1, total = 0, number;
    printf("Enter the value of number:");
    scanf("%d", &number);

    while (i < number)

    {
        total += i;
        ++i;
    }
    printf("%d\n", total);

    return 0;
}