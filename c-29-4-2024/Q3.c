#include <stdio.h>
int main()
{

    int number;
    int hello;
    int sum;
    printf("program to print the multiplication tabal of the giving numbers........\n\n");
    printf("Enter any number:- ");
    scanf("%d", &number);

    for (hello = 1; hello <= 10; hello++)
    {
        sum = number * hello;

        printf("%d X %d = %d \n", number, hello, sum);
    }

    return 0;
}