// Program 24 using FOR LOOP

#include<stdio.h>
int main(){
   
   int num,i=1,m=1;

   printf("ENTER THE VALUE OF NUMBER\n");
   scanf("%d",& num);

   for ( i = 1; i<=num; i++)
   {
       m=m*i;
       
   }
       printf("FACTORIAL OF %d IS %d\n",num,m);
   

    return 0;

}