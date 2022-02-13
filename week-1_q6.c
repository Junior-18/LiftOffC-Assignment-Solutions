//Intermediate
/*1. Write a C program to enter temperature in Farhenheit
and convert to Celsius.*/

#include<stdio.h>

int main(){
    float c, f;
    printf("Enter temperature in Celsius : ");
    scanf("%f", &c);
    f = 9*c/5 + 32;
    printf("The temperature in Farhenheit is : %f", f);
    return 0;
}