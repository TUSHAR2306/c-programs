// MODIFY VERSION OF P_12 PROGRAM

// including header file
#include<stdio.h>
int main(){
    
    float physics,maths,chemistry,total;

    printf("ENTER YOUR PHYSICS MARKS\n");
    scanf("%f",&physics);

    printf("ENTER YOUR CHEMISTRY MARKS\n");
    scanf("%f",&chemistry);
 
    printf("ENTER YOUR MATHEMATICS MARKS\n");
    scanf("%f",&maths);

    total=(physics+chemistry+maths)/150*100;

    if(total<40){ 
        printf("YOU ARE FAIL,YOUR MARKS ARE LESS THAN THE PASSING MARKS %f %f %f %f\n",total,physics,chemistry,maths);
    }
    
     else if (physics<18)
    {
       printf("YOU ARE FAIL,YOUR PHYSICS MARKS ARE LESS THAN THAN PASSING MARKS %f",physics); 
    }
    
    else if (chemistry<18)
    {
       printf("YOU ARE FAIL,YOUR chemistry MARKS ARE LESS THAN THAN PASSING MARKS %f",chemistry); 
    }
    
    else if (maths<18)
    {
       printf("YOU ARE FAIL,YOUR maths MARKS ARE LESS THAN THAN PASSING MARKS %f",maths); 
    }
    
    else
    {
        printf("YOU ARE PASS,YOU ARE PROMOTED TO NEW CLASS  %f %f %f %f\n",total,physics,chemistry,maths);
    }                         
    
    



    
    return 0;

}