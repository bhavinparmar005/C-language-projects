// 7. Write a Program to print the below pattern using nested for loop.
// A
// B A
// C B A
// D C B A
// E D C B A

#include<stdio.h>
int main()
{
    char col,row;

    for(col='A'; col <='E'; col++){
        for(row=col; row>='A';row--){
            printf("%c ",row);
        }
        printf("\n");
    }
 return 0;
}