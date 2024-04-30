#include <stdio.h>
int main()
{
    int number;
    int sum = 1;
    printf("program is print the  factorial you giving numbers....\n");
    printf("Enter any number:- ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        sum *= i;
    }
    printf("the  factorial number is :-%d", sum);

    return 0;
}