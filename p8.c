// Program to calculate SIMPLE INTEREST by user input

// Including header file
#include<stdio.h>
int main(){
   
//    Declaring variables

   float principal;
   float rate;
   float time;
   float SI;


//    Taking user input and Printing the value of principal amount

   printf("ENTER THE PRINCIPAL AMOUNT\n");
   scanf("%f",&principal);

//    Taking the user input and Printing the value of rate of interest

   printf("ENTER THE RATE OF INTEREST\n");
   scanf("%f",&rate);
  
//    Taking user input and Printing the value of Time period 

   printf("ENTER TIME PERIOD\n");
   scanf("%f",&time);
   
//    Formula to calculate SI 

   SI=(principal*rate*time);
   
   // Printing value of SI
   
   printf("SIMPLE INTEREST IS %f\n",SI);



    return 0;

}