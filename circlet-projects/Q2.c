// 2. Write a Program to print the below pattern using nested for loop.
// 11
// 12 13
// 14 15 16
// 17 18 19 20
// 21 22 23 24 25

#include<stdio.h>
int main()
{
    int col;
    int row;
    int sum=11;

    for(col=11; col<=15;col++){

        for(row=11; row<=col;row++){
            printf("%d  ",row);
            sum++;
        }
        printf("\n");
    }
     return 0;
}