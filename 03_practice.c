#include <stdio.h>

int main()
{
    int principal = 100, rate = 2, years = 10;

    int simpleinterest = (principal * rate * years) / 100;
    printf("The value of simple interest is %d", simpleinterest);
    return 0;
}