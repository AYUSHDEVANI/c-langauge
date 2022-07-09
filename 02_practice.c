#include <stdio.h>

int main()
{

    int radius;
    int height;
    float pi = 3.14;
    printf("Enter the value of radius=");
    scanf("%d", &radius);

    printf("Enter the value of height=");
    scanf("%d", &height);

    printf("The area of this circle is %f\n", pi * radius * radius);
    printf("Volume of this circle is %f\n", pi * radius * radius * height);
    return 0;
}