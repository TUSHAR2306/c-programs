// Program to checking whether a student is pass or fail 
// max.marks=50

including header file
#include<stdio.h>
int main(){
    // initialising variables

    float physics,maths,chemistry,total;
    
    // Taking user input and printing the value of physics marks

    printf("ENTER YOUR PHYSICS MARKS\n");
    scanf("%f",&physics);

// Taking user input and printing the value of chemistry marks

    printf("ENTER YOUR CHEMISTRY MARKS\n");
    scanf("%f",&chemistry);

    // Taking user input and printing the value of Maths marks
 
    printf("ENTER YOUR MATHEMATICS MARKS\n");
    scanf("%f",&maths);
   
//   finding total percentage

    total=(physics+chemistry+maths)/150*100;

    // using if and else

    if ((total<40) || (physics<33) || (chemistry<33) || (maths<33))
    {
        printf("YOU ARE FAIL,YOUR MARKS ARE LESS THAN THE PASSING MARKS %f %f %f %f\n",total,physics,chemistry,maths);
    }
    else
    {
        printf("YOU ARE PASS,YOU ARE PROMOTED TO NEW CLASS  %f %f %f %f\n",total,physics,chemistry,maths);
    }
    
    



    
    return 0;

}