// Program to convert celsius temperature into farenheit by user input

// Including header file
#include<stdio.h>
int main(){
     
    //  Declaring variables

     float celsius;
     float far;
    
    // Taking user input and printing the Value of celsius temperature

     printf("ENTER YOUR TEMPERATURE\n");
     scanf("%f",&celsius);
    
    // Formula to convert celsius into farhenheit

     far=(celsius* 9/5 + 32);

    //  Printing the value of temperature in farenheit
    
    printf("TEMPERATURE IN FARHENHEIT IS %f",far);



    return 0;

}