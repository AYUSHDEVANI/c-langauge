#include <stdio.h>

void printtable(int);

int main()

{
    int number;
    printf("Enter integer number : ");
    scanf("%d", &number);

    printf("table of %d is \n", number);
    printtable(number);
    return 0;
}

void printtable(int num)
{
    int i;
    for (i = 1; i <= 10; i++)

    {
        printf("%5d \n", (num * i));
    }
}
