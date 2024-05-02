// 3. Write a Program to print the below pattern using nested for loop.
//   *  *  *  *  *
//   *        *  *
//   *     *     *
//   *  *        *
//   *  *  *  *  *
#include <stdio.h>
int main()
{

    int number, col, row;

    printf("enter number row X col :-  ");
    scanf("%d", &number);

    for (row = 1; row <= number; row++)
    {

        for (col = 1; col <= number; col++)
        {
            if (col == 1 || col == number || row == 1 || row == number || col + row==number+1)
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