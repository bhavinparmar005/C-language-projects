// Q.4 Write a Program to find the formula's answer (x-y)^2.
#include<stdio.h>
int main()
{
   int a;
   int b;
   int sum;

   printf("Enter the value of x:-");
   scanf("%d",&a);
   printf("Enter the value of y:-");
   scanf("%d",&b);
   sum=(a*a)+(b*b)-(2*a*b);
   printf(" (x-y)^2:- %d",sum);



    return 0;
}