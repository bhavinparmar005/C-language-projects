#include <stdio.h>
int main()
{
    int number;
    int n = 1;
    printf(" Program to print even numbers from 1 to N using a do-while loop.\n");

    printf("Enter any number:-");
    scanf("%d", &number);
    printf("output:-\n");
    do
    {
        if (n % 2 == 0)
        {
          
            printf(" %d\n", n);
        }

        n++;
    } while (n <= number);
    return 0;
}