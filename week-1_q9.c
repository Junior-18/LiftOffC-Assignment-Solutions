//Intermediate
/*4. Write a C program to check whether a number is
positive, negative or zero using switch case.*/

#include<stdio.h>

int main(){
    float number;
    printf("Enter the number : ");
    scanf("%f", &number);
    switch(number > 0){
        case 1:
        printf("%f is a positive number.", number);
        break;
        case 0:
        switch(number < 0){
            case 1:
            printf("%f is a negative number.", number);
            break;
            case 0:
            printf("It is zero.");
        }
    }
    return 0;
}