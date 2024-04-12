#include<stdio.h>
#include<conio.h>
main()
{
 const  float pi =3.14;
 int radius,area;

clrscr();

   printf(" Enter the radius of the circle:\n");
   scanf("%d" ,&radius);
      area = pi * radius * radius;
      printf("the area of the circle with radius %d is %d\n \n",radius ,area);




getch();
}