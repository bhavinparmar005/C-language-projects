//  Write a Program to find the Perimeter of the circle.
#include<stdio.h>
int main()
{
	int r;
	float pi = 3.14;
	float sum;
	
	printf(" enter your perimeter radius:-\n");
	scanf("%d",&r);
	sum =2*pi*r;
	printf(" perimeter of circle :-%.2f",sum);
	
	
	
	
	return 0;
}