//Intermediate
/*2. Write a C program to find maximum between three numbers.*/

#include<stdio.h>

int main(){
    int num1, num2, num3;
    printf("Enter three numbers with a space in between : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1>num2 && num1>num3){
        printf("%d is maximum.", num1);
    }
    else if(num2>num3 && num2>num1){
        printf("%d is maximum.", num2);
    }
    else if(num3>num1 && num3>num2){
        printf("%d is maximum.", num3);
    }
    else{
        printf("All are equal.");
    }
    return 0;
}