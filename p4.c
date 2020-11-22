// Program to calculate AREA OF A CIRCLE BY TAKING USER INPUT

// Including header file
#include<stdio.h>
int main(){
    
    // Declaring variables
    float radius;
    float pi=3.14;
    float area;
   
//    Taking input from user and Printing the value of    Radius

    printf("ENTER THE RADIUS\n");
    scanf("%f",&radius);

    // Formula To calculate the area of circle
    area=pi*radius*radius;

    // Printing the value of area of circle
    printf("AREA OF CIRCLE IS %f\n",area);

    return 0;

}