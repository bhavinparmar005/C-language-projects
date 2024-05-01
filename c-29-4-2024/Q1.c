#include <stdio.h>
int main()
{
    int number;
    int i;
    int sum = 0;
    printf(" Program is print the sum of all giving  numbers.\n");
    printf("Enter any number:- ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        sum += i;
    }
    printf("the sum all number is:- %d", sum);
    return 0;
}