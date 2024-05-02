//  Write a Program to find the sum of a first and the last digit of a number.
// For example,
// Input:
// Enter any number: 384

// Output: 
// The sum of the first and the last digit: 7



#include<stdio.h>
int main()
{
    int number;
    int sum=0;
    int first_number;
    int last_number;
    printf("program is giving the number  sum of a first and last digits........\n\n");
    printf("Enter any number:- ");
    scanf("%d",&number);
    
    for( first_number=number; first_number>=10; first_number/=10);
          last_number=number % 10;
          sum=first_number+last_number;
        
          printf("The sum of the first digit %d and the last digit %d = %d",first_number,last_number,sum);
        
    

  
    return 0;
    
}
