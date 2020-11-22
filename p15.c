// Program to determine whether a letter  is lowercase or upppercase(using ASCII values)

// Including header file
#include<stdio.h>
int main(){
     
    //  initialising variable
    char lowercase;

    // Taking user input and printing the value of character
     
    printf("INPUT CHARACTER\n");
    scanf("%c",&lowercase);

    if ((lowercase>=97) && (lowercase<=127))
    {
        printf("CHARACTER IS LOWER CASE\n");

    }

    else
    {
        printf("CHARACTER IS UPPER CASE\n");
    }
    
    
     
    return 0;

}