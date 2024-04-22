#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("Enter a value of the frist number:-  ");
    scanf("%d", &a);

    printf("Enter a value of the second number:-  ");
    scanf("%d", &b);

    printf("Enter a value of the third number:-  ");
    scanf("%d", &c);

    printf("Enter a value of the fourth number:-  ");
    scanf("%d", &d);

    if (a > b)
    {
        if (a > c)
        {

            if (a > d)
            {
                printf("the miximum value is:- %d", a);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("the miximum value is:- %d", b);
        }
    }
    else if (c > d)
    {
        printf("the miximum value is:- %d", c);
    } 

    else
    {
        printf("the miximum value is:- %d" ,d);
    }

    return 0;
}