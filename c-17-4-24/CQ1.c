#include<stdio.h>
int main()
{
    int celcius;
    float a=1.8;
    float sum;

    printf("enter your temperature:-");
    scanf("%d",&celcius);

    sum=(celcius*a)+32;

    printf("your temperature in fahrenheit:-%.1f",sum);
}