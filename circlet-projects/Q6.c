// 6. Write a Program to print the below pattern using nested for loop.
// *  *  *  *  *
// *           *
// *  *  *  *  *
// *           *
// *           *


#include <stdio.h>
int main()
{

    int  col, row;
    int number=5;
    // printf("enter number row X col :-  ");
    // scanf("%d", &number);

    for (row = 1; row <= number; row++)
    {

        for (col = 1; col <= number; col++)
        {
            if (col == 1 || col == 5 || row == 1 || row == 3)
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}