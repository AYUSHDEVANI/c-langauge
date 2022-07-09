#include<stdio.h>

int main(){

    int length, breadth;

    printf("Enter the value of leanth\n", length);
    scanf("%d", &length);

    printf("Enter the value of breadth\n", breadth);
    scanf("%d", &breadth);

    int area = length*breadth;
    printf("The area of this rectangle is %d", area);

    return 0;
}