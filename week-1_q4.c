/*Q4. Write C program to enter two numbers and
perform all arithmetic operations.*/

#include<stdio.h>
int main(){ 
    int a, b;
    float c;
    printf("Enter two numbers with a space in between : \n");
    scanf("%d %d", &a, &b);
    c = (float)a/b;
    printf("The sum of the two numbers is : %d \n", (a+b));
    printf("The substraction results : %d \n", (a-b));
    printf("The multiplication results : %d \n", (a*b));
    printf("The division results : %f \n", c);
    printf("The modulus is : %d \n", (a%b));
    return 0;
}