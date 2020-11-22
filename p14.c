// Program to find the greatest of four numbers

// Including header file
#include<stdio.h>
int main(){
       
    //    initialising variables

      int num1,num2,num3,num4;
      

    //  Taking user input and printing the value of num1

      printf("ENTER THE 1st NUMBER\n");
      scanf("%d",&num1);

      //  Taking user input and printing the value of num2
    
      printf("ENTER THE 2nd NUMBER\n");
      scanf("%d",&num2);

//  Taking user input and printing the value of num3
    
      printf("ENTER THE 3rd NUMBER\n");
      scanf("%d",&num3);

      //  Taking user input and printing the value of num4
    
      printf("ENTER THE 4th NUMBER\n");
      scanf("%d",&num4);

    //   Comparing which is the greatest number using if else

      if((num1>num2) && (num1>num3) && (num1>num4))
      {
          printf("%d IS THE GREATEST OF FOUR NUMBERS\n",num1);
      }

     else if((num2>num1) && (num2>num3) && (num2>num4))
     {
         printf("%d IS THE GREATEST OF FOUR NUMBERS\n",num2);

     }
     
     else if((num3>num1) && (num3>num2) && (num3>num4))
     {
         printf("%d IS THE GREATEST OF FOUR NUMBERS\n",num3);
     }

     else if ((num4>num1) && (num4>num2) && (num4>num3))
     {
         printf("%d IS THE GREATEST OF FOUR NUMBERS\n",num4);
     }
     





    return 0;

}