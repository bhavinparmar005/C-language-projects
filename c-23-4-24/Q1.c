#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Find the minimum mumber ::::: \n\n");
    printf("Enter a value of the first number:-  ");
    scanf("%d", &a);
    printf("Enter a value of the second number:-  ");
    scanf("%d", &b);
    printf("Enter a value of the thrid number:-  ");
    scanf("%d", &c);

    (a < b && a < c)   ? printf("this mimimum value is:- %d ", a)
    : (b < a && b < c) ? printf("this mimimum value is:-%d ", b)
                       : printf("this mimimum value is:- %d ", c);

    return 0;
}