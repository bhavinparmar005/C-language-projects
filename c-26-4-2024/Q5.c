#include <stdio.h>
int main()
{
    int number;
    int sum = 0;
    int i;

    printf("program is check the number is prime or not.\n");
    printf("Enter any number :- ");
    scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            sum++;
        }
    }
    if (sum == 2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime number");
    }
}