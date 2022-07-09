#include <stdio.h>

int sumtwonumber(int, int);
float averagetwonumber(int, int);

int main()
{
    int number1, number2;
    int num3 = 10;
    int num4 = 20;
    int sum, sumOfTwoNumber, sum3;
    float avg;

    printf("Enter the first integer number:");
    scanf("%d", &number1);

    printf("Enter the second integer number:");
    scanf("%d", &number2);

    sum = sumtwonumber(number1, number2);
    avg = averagetwonumber(number1, number2);
    sumOfTwoNumber = sumtwonumber(num3, num4);
    sum3 = sumtwonumber(50, 40);

    printf("number1: %d, number2: %d\n", number1, number2);
    printf("number2: %d, number3: %d, sum of two number: %d\n", num3, num4, sumOfTwoNumber);
    printf("number4: %d, number5: %d, sum of two number: %d\n", 50, 40, sum3);
    printf("sum: %d, average: %f\n", sum, avg);

    return 0;
}

int sumtwonumber(int x, int y)
{

    int sum;
    sum = x + y;
    return sum;
}

float averagetwonumber(int x, int y)
{

    float average;
    return ((float)(x) + (float)(y)) / 2;
}