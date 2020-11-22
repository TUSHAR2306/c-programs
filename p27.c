// Program 26(modify) BY USER INPUT

#include<stdio.h>
int main(){
      
  int num,i=1,add=0;

  printf("ENTER THE NUMBER\n");
  scanf("%d",&num);
  
  for ( i = 1; i <= 10; i++)
  {
      add=add+(num*i);

  }
      printf("ADDITION OF ALL MULTIPLES OF %d UPTO 10 IS %d\n",num,add);
  

     return 0;

}