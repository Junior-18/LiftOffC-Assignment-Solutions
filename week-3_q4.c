/*4. Write a program in C to swap two
numbers using function.*/

#include<stdio.h>

void swap(int *x, int *y){
    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;
    // int temp;
    // temp = *x;
    // *x = *y;
    // *y = temp;
}

int main(){
    int num1, num2;
    printf("Enter the value of x : \n");
    scanf("%d", &num1);
    printf("Enter the value of y : \n");
    scanf("%d", &num2);
    swap(&num1, &num2);
    printf("After swapping : \nx = %d & y = %d", num1, num2);
    return 0;
}