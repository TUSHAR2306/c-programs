// Program to print FIRST N NATURAL numbers in REVERSE ORDER

// Including Header file

#include<stdio.h>
int main(){
  
  // initialising variables
  
  int n,i;
  scanf("%d",&n);
  for ( i = n; i ; i--)
  {
      printf("%d\n",i);
  }
  
}