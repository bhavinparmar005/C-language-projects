#include <stdio.h>
int main()
{
    int a;
    int b;
    int sum;

    printf("Enter the value of x:-");
    scanf("%d", &a);
    printf("Enter the value of y:-");
    scanf("%d", &b);
    sum = (a * a * a) + (b * b * b) + (3 * a * b);
    printf(" (x+y)^3:- %d", sum);

    return 0;
}