//  Write a Program to find the area of a circle.
#include <stdio.h>

main()
{
   const float pi = 3.14;
   int radius, area;

   printf(" Enter the radius of the circle:\n");
   scanf("%d", &radius);
   area = pi * radius * radius;
   printf("the area of the circle with radius %d is %d\n \n", radius, area);
}