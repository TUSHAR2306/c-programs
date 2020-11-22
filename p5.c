// Program to calculate the VOLUME OF A CYLINDER by taking input from user P4 PART(B)

// Including Header file
#include<stdio.h>
int main(){
    
    // declaring variables
    float radius;
    float pi=3.14;
    float height;
    float volume;

    // Taking user input and printing the value of radius

    printf("ENTER THE RADIUS\n");
    scanf("%f",&radius);

    // Taking user input and printing the value of height

    printf("ENTER THE HEIGHT\n");
    scanf("%f",&height);
      
    // Formula to calculate volume of cylinder

    volume=pi*radius*radius*height;
     
    //  Printing the value of area
    
    printf("AREA OF REQUIRED CYLINDER IS %f\n",volume);


    return 0;

}