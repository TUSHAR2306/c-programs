// Program to ADD ALL MULTIPLES OF 8 UPTO 10

#include<stdio.h>
int main(){
    
    int num=8,i=1,add=0;

    
    do
    { 
        add=add+(num*i);
        i++;

    } while (i<=10);
    printf("ADDITION OF ALL MULTIPLES OF %d UPTO 10 IS %d\n",num,add);
    

    return 0;

}