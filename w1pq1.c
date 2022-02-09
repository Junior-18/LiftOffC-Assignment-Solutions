/*1. Write C program to enter two numbers and
perform all arithmetic operations.*/
#include<stdio.h>
int main(){

    //Using Float Input (Modulus Excluded)

    float a, b;
    printf("Enter two numbers with a space in between : ");
    scanf("%f %f", &a, &b);
    printf("The sum of the two numbers is : %f \n", (a+b));
    printf("The substraction results : %f \n", (a-b));
    printf("The multiplication results : %f \n", (a*b));
    printf("The quotient is : %f \n", (a/b));
    
    //Using Integer Input (Division Limited to Integral Outcome only)
    
    // int a, b;
    // printf("Enter two numbers with a space in between : ");
    // scanf("%d %d", &a, &b);
    // printf("The sum of the two numbers is : %d \n", (a+b));
    // printf("The substraction results : %d \n", (a-b));
    // printf("The multiplication results : %d \n", (a*b));
    // printf("The modulus is : %d \n", (a%b));


    return 0;
}