#include <stdio.h>

void printMyName();

void main()
{
    printMyName();
}

void printMyName()
{
    char chr[50];
    printf("Enter your name : ");
    scanf("%s", &chr);

    printf("Your name is : %s", chr);
}