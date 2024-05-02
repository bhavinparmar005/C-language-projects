//  Write a Program to Swap two variables without using a third variable.
#include <stdio.h>
int main()
{
    int a = 100;
    int b = 200;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d \n", a);
    printf("%d", b);
    return 0;
}