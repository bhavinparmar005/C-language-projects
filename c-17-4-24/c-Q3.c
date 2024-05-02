// Write C Program to find the third angle of a right triangle if two other angles are given.

#include<stdio.h>
int main()
{
    int first_angle ;
    int second_angle;
    int sum;
    printf("Enter first angle value:-");
    scanf("%d",&first_angle);
     printf("Enter second angle value:-");
      scanf("%d",&second_angle);

      sum=180-(first_angle+second_angle);
      printf("your third angle value is:-%d",sum);
}