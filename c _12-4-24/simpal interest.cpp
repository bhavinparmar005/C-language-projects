#include <stdio.h>
int main()
{

	int p;
	int r;
	int t;
	int sum = 100;
	int value;
	printf("enter the your amount \n");
	scanf("%d", &p);
	printf("enter the your rate of interest \n");
	scanf("%d", &r);
	printf("enter the your time period \n");
	scanf("%d", &t);

	value = p * r * t / 100;

	printf(" interest $ %d ", value);

	return 0;
}