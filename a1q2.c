/*Q 2. Write a program to find maximum between two numbers.
(In this question, you'll learn the use of if-else condition.)*/

#include<stdio.h>

int main(){
    int a, b;

    printf("Enter two numbers with a space in between : ");
    scanf("%d %d", &a, &b);

    if(a>b)
    {
        printf("%d is maximum.", a);
    }
    else
    {
        printf("%d is maximum.", b);
    }

    return 0;
}