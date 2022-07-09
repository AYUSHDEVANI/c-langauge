#include <stdio.h>
// int main(){
//     int a=20, b=70, c=5, d=10;
//     printf("%d == %d is %d \n", a,b, a==b);
//     printf("%d <= %d is %d \n", a,b, a<=b);

//     printf("%d != %d is %d \n", a,b, a!=b);
// return 0;
// }



int main(){
    int a=6, b=7, result;
    result = (a == b) && (b < a);
    printf("(a == b) && (b < a) is %d \n", result);
    return 0;
}