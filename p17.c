// Program to calculate income tax on given income

// Including Header file
#include<stdio.h>
int main(){
   
//    initialising variables

     float income;
     float tax=0;
    
    // taking user input and printing the value of income
      printf("ENTER YOUR INCOME\n");
      scanf("%f",&income);

      if ((income>250000) && (income<500000))
      {
          tax=tax+0.05*(income-250000);
          printf("INCOME TAX YOU HAVE TO PAY IS %f on %f\n",tax,income);
      }

      else if ((income>500000) && (income<1000000))
      {
          tax=tax+0.2*(income-500000);
          printf("INCOME TAX YOU HAVE TO PAY IS %f on %f\n",tax,income);

      }

      else if (income>1000000)
      {
          tax=tax+0.3*(income-1000000);
          printf("INCOME YOU HAVE TO PAY IS %f on %f\n",tax,income);
      }
      else
      {
          printf("YOU DO NOT HAVE TO PAY ANY TAX\n");
      }
      
      
      
    
    return 0;

}