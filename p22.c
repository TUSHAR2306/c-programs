// Program 18 using FOR LOOP

// Including header file
#include<stdio.h>
int main(){
    
    // initialising variables

    int num,i=1,sum=0;
 
//  taking user input and printing the value of num

    printf("ENTER THE VALUE OF NUMBER\n");
    scanf("%d",&num);

    for ( i = 1; i <= num; i++)
    {
        sum=sum+i;
    }
     printf("THE SUM OF FIRST %d NUMBERS ARE %d\n",num,sum);
    

    return 0;

}