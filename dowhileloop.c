#include <stdio.h>

int main()
{
    int number, sum = 0, i = 0;

    printf("Please enter number for the total: ");
    scanf("%d", &number);

    do
    {
        sum += number;
        i++;
    } while (i <= number);

    printf("The Sum is : %d", sum);

    return 0;
}