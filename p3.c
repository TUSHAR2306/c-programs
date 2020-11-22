// Program to calculate AREA OF A RECTANGLE by TAKING INPUT FROM USER PART(B)PROGRAM2

// Including header file
#include<stdio.h>
int main(){

    // declaring variables
    float length;
    float breadth;
    float area;
     
    //  taking input from user of length and Printing the value of Length

    printf("ENTER THE LENGTH OF THE RECTANGLE\n");
    scanf("%f",&length);
     
    //  taking input from user of breadth and Printing the value of breadth
    
    printf("ENTER THE BREADTH OF THE RECTANGLE\n");
    scanf("%f",&breadth);
    
    // formula to calculate area
    
    area=length*breadth;

    // printing the value of required area

    printf("AREA OF REQUIRED RECTANGLE IS %f\n",area);

    return 0;

}