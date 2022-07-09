#include<stdio.h>

int main(){

    int a, b, c, d;
    printf(" Enter the value of a\n");
    scanf("%d" , &a);

    printf(" Enter the value of b\n");
    scanf("%d" , &b);

    printf(" Enter the value of c\n");
    scanf("%d" , &c);

    printf("Enter the value of d\n");
    scanf("%d" , &d);

    printf("The multipal of a and b is %d\n", a * b);
    printf("The sum of a,b,c is %d\n", a+b+c);
    printf("The sum of a and c is %d\n", a+c);

    return 0;
}