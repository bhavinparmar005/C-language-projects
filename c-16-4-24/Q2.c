#include<stdio.h>
int main()
{
    int a=100;
    int b=200;

 a=a+b;
 b=a-b;
 a=a-b;
 
    printf("%d %d",a,b );
    return 0;
}