#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("Enter a value of the first number:- ");
    scanf("%d", &a);

    printf("Enter a value of the second number:- ");
    scanf("%d", &b);
    printf("Enter a value of the third number:- ");
    scanf("%d", &c);

    if (a < b)
    {
        if (a < c)
        {
            printf("the minimum value is : %d", a);
        }
        else
        {
            printf("the minimum value id :%d", c);
        }
    }
    else
    {
        if (b < c)
        {
            printf("the minimum value id :%d", b);
        }
        else
        {
            printf("the minimum value id :%d", c);
        }
    }

    return 0;
}