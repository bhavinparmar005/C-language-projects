// 4. Write a Program to print the below pattern using nested for loop.
// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5
#include<stdio.h>
int main()
{
    int row,col;
    for(col=1; col<=5;col++){

        for(row=col;row<=5;row++){
            printf("%d  ",row);
        }

        printf("\n");
    }
     return 0;
}