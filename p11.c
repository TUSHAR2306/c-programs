// Program For checking USER RATING by the help of switch case 

// Including header file 
#include<stdio.h>
int main(){
        
    // initializing or Declaring variable 
    
      int rating;

    //   Taking user input and printing the value of rating

      printf("YOUR RATINGS\n");
      scanf("%d",&rating);
    

    // USING SWITCH CASE 

    switch (rating)
    {
    case 1:
        printf("YOUR RATING IS 1\n");
        break;
    
    case 2:
        printf("YOUR RATING IS 2\n");
        break;
    
    case 3:
        printf("YOUR RATING IS 3\n");
        break;
    
    case 14:
        printf("YOUR RATING IS 4\n");
        break;

    case 5:
        printf("YOUR RATING IS 5\n");
        break;
    
    default:
       printf("INVALID RATING\n");
        break;
    }
    return 0;

}