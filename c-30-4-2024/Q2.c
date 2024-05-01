// Write a Program to count the total number of digits in a number.
// For example,
// Input:
// Enter any number: 752

// Output: 
// Total number of digits: 3
#include<stdio.h>
int main()
{
    int number;
    int sum=0;

    printf("program is giving your number count the total number of digits..\n\n");
    printf("Enter any number:- ");
    scanf("%d",&number);
    while (number !=0)
    {
       sum ++;
       number/=10;
  
      
    }
      printf("Total number of digits :- %d", sum);
    
   return 0;
}