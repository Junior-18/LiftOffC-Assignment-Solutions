/*Q 3. Write a program to check whether a
number is even or odd using switch case.
(In this question, you'll apply the switch case concept.)*/

#include<stdio.h>

int main(){
    int x;

    printf("Enter the number here : ");
    scanf("%d", &x);

    switch (x%2)
    {
    case 0:
        printf("%d is even.", x);
        break;
    
    default:
        printf("%d is odd.", x);
        break;
    }
    
    return 0;
}