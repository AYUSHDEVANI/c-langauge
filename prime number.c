 #include <stdio.h>
//  int main(){
//     int number;
//     printf("enter an integer: ");
//     scanf("%d", &number);

//     if  (number%2 == 0){
//         printf("%d is an even integer.",number);
//     }else{
//         printf("%d is an odd integer.",number);
//     }
//     return 0;
//  }

int main(){
    int number1,number2;
    printf("Enter Two Integer: ");
    scanf("%d %d", &number1, &number2);
    if(number1 == number2)
{
    printf("result: %d = %d", number1, number2);
    
}
else if (number1 > number2){
printf("result: %d > %d", number1, number2);
}

else{
    printf("result: %d < %d",number1, number2);
}
return 0;

}