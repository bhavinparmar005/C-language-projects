#include<stdio.h>
int main()
{
    int a=30;
    int b=40;
    int c;

    c=a;
    a=b;
    b=c;
    printf("%d,%d", a,b) ;
    return 0;
}