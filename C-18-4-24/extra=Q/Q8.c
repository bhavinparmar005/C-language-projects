#include <stdio.h>
int main()
{

    int integer;
    printf("Enter your integer :-");
    scanf("%d", &integer);
    if (integer % 2 == 0)
    {
        printf("your integer number is even");
    }
    else
    {
        printf(" your integer number is odd");
    }

    return 0;
}