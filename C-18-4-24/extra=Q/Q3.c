#include <stdio.h>
int main()
{
    int degrees;
    printf("Given angle into one the guadrants:-");
    scanf("%d", &degrees);

    if (degrees >= 90 && degrees <= 0)
    {
        printf(" your angle is :-First quadrant");
    }
    else if (degrees >= 90 && degrees <= 180)
    {
        printf(" your angle is :-second quadrant");
    }
    else if (degrees >= 180 && degrees <= 270)
    {
        printf(" your angle is :-thrid quadrant");
    }
    else if (degrees >= 270 && degrees <= 360)
    {
        printf("your angle is :- fourth quadrant ");
    }
    else
    {
        printf(" 404 page not found");
    }
}