//Intermediate
/*5. Write a C program to check whether a number
is divisible by 5 and 11 or not.*/

#include<stdio.h>

int main(){
    int number;
    printf("Enter the number : ");
    scanf("%d", &number);
    if(number%55==0){
        printf("%d is divisible by 5 and 11.", number);
    }
    else{
        printf("%d is not divisible by both 5 and 11.", number);
    }
    return 0;
}