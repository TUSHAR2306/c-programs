// Program 18 using DO WHILE LOOP

// Including header file
#include<stdio.h>
int main(){
    
    // initialising variables

    int num,i=1,sum=0;

// taking user input and printing the value of num

    printf("ENTER THE VALUE OF NUMBER\n");
    scanf("%d",&num);
    
    do
    { 
        sum=sum+i;
        i++;
        
    } while (i<=num);
    printf("THE SUM OF FIRST %d NUMBERS IS %d\n",num,sum);
    

    return 0;

}