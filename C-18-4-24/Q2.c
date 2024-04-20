#include <stdio.h>
int main()

{
    int your_value;

    printf("Enter Any value:-");
    scanf("%d", &your_value);
    if (your_value > 0)
    {
        printf("this number is positive");
    }
    else if (your_value < 0)
    {
        printf("this number is nagative");
    }
    else
    {
        printf("this number is neutral");
    }
}