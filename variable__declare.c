#include <stdio.h>

// int main(){

//     int numberFive=5;
//     printf("Number is: %d",numberFive);
//     return 0;
// }

// int main(){
//     int userNumber;
//     printf("Please Enter Values: "); // use for give output // give output to user
//     scanf("%d",&userNumber); // get output from user
//     printf("Number is : %d",userNumber);
//     return 0;
// }

int main(){
    int userNumber;
    float numberTwo;

    printf("Please Enter first and second values :");
    scanf("%d%f",&userNumber,&numberTwo);
    printf("Entered Values: %d and %f",userNumber,numberTwo);
    return 0;
}