// Program to print the SUM OF FIRST N NATURAL NUMBERS

// Including header file
#include<stdio.h>
int main(){

    // initialising varialbles

    int num,i=1,sum=0;
 
    // taking user input and printing the value of num
    
     printf("ENTER THE VALUE OF NUMBER\n");
     scanf("%d",&num);  
        

     while (i<=num)
     {

         sum=sum+i;
         i++;
     }
    printf("THE SUM OF FIRST %d numbers is %d\n",num,sum);
     

    return 0;

}