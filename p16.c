// Program to find whether a year is leap year or not

// Including header file
#include<stdio.h>
int main(){
   
//    initialising variables

   int year;

//    taking user input and printing the value of year
   printf("ENTER THE YEAR\n");
   scanf("%d",&year);

   if (year%4==0)
   {
     printf("THE YEAR %d IS LEAP YEAR\n",year);
   }
   
   else if (year%100==0)
   {
       printf("THE YEAR %d IS LEAP YEAR \n",year);
   }

   else if (year%400==0)
   {
       printf("THE YEAR %d IS LEAP YEAR\n",year);
   }
   
   else
   {
       printf("%d IS NOT A LEAP YEAR\n",year);
   }
   
   

    return 0;

}