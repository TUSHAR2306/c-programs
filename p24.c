// Program to find FACTORIAL OF A NUMBER

#include<stdio.h>
int main(){
   
   int num,i=1,m=1;

   printf("ENTER THE VALUE OF NUMBER\n");
   scanf("%d",&num);
  
  while(i<=num)
  {  
      m=m*i;
      i++;
  }
      printf("FACTORIAL OF %d IS %d\n",num,m);



    return 0;

}