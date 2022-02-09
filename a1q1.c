 /* Q 1. Write a C program to display your basic information like
name, regd. no. (only last three digits), branch and your hobbies.
(In this question, you'll learn how to take an input and display
a string and an integer.)*/ 

   #include<stdio.h>
   #define MAX_LIMIT 100

   int main(){
    char regd[3];
    char name[MAX_LIMIT];
    char branch[MAX_LIMIT];
    char hobbies[MAX_LIMIT];

    printf("Enter your name here : ");
    fgets(name, MAX_LIMIT, stdin);

    printf("Enter your Regd. No. (Last three digits only) : ");
    scanf("%s", &regd);

    printf("Enter your branch here : ");
    fgets(branch, MAX_LIMIT, stdin);
    fgets(branch, MAX_LIMIT, stdin);

    printf("Enter your hobbies here : ");
    fgets(hobbies, MAX_LIMIT, stdin);

    printf("Name :- %s", name);
    printf("Registration Number :- %s \n", regd);
    printf("Branch :- %s", branch);
    printf("Hobbies :- %s", hobbies);

    return 0;
   }