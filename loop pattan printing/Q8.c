//  8 . Write a Program to print the below pattern using nested for loop.
// 1
// 2    3
// 4    5   6
// 7    8   9   10
// 11 12 13 14 15

#include<stdio.h>
int main()
{
    int col;
    int row;
    int sum=1;

    for(col=1; col<=5;col++){

        for(row=1; row<=col;row++){
            printf("%d  ",sum++);
        }
        printf("\n");
    }
     return 0;
}