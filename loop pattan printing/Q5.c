// 5. Write a Program to print the below pattern using nested for loop.
// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5
#include <stdio.h>
int main()
{
    int col, row;
    for (col = 1; col <= 5; col++)
    {

        for (row = col; row <= 5; row++)
        {
            printf("%d ", col) ;
        }
        printf("\n");
    }
     return 0;
}