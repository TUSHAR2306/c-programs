// Program to print FIRST N NATURAL numbers

// Including Header file

#include<stdio.h>
int main(){
    
    // initialising variables

    int n,i=0;
    
    // taking user input and printing the value of N
    
    printf("ENTER N\n");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
      printf("%d\n",i);
    }
    

    


    return 0;

}