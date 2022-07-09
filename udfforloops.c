#include <stdio.h>

int main()
{

    int i, sum = 0, j;

    printf("Please Enter inti Number :");
    scanf("%d", &i);

    printf("Please Enter ending Number :");
    scanf("%d", &j);

    int forLoop()
    {
        for (i; i <= j; i++)
        {
            printf("i is : %d\n\n", i);
            sum += i;
        }
    }

    if (i && j)
    {
        int total = forLoop();
    }

    printf("\n\n Sum is : %d", sum);

    return 0;
}