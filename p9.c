// Program to CHECK WHETHER THE NUMBER IS DIVISIBLE BY 97 or not

// Including header file

#include<stdio.h>
int main(){

    // Declaring variables

    int num;
    int div;
    
    // Taking user input and Printing the value of number

    printf("ENTER THE NUMBER");
    scanf("%d",&num);
    
    // Divisibility test

    div=num%97;

    // Printing the value of divisibility test
    
    printf("REMAINDER IS %d\n",div);

    return 0;

}