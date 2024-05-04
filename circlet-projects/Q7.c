// 7. Write a Program to print the below pattern using nested for loop.
// *  *  *  *  *
//    *        *
// *  *  *  *  *
//    *        *
// *  *  *  *  *


#include <stdio.h>
int main()
{

    int number;
    int col, row;

    // printf("enter number row X col :-  ");
    // scanf("%d", &number);

    for (row = 1; row <=5; row++)
    {

        for (col = 1; col <= 5; col++)
        {
            if (row==1||col==2||row==5||col==5||row==3)
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