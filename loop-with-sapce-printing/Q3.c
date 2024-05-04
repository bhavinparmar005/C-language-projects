// 3. Write a Program to print the below pattern using nested for loop.
//          5
//        4 4
//      3 3 3
//    2 2 2 2
//  1 1 1 1 1

#include<stdio.h>
int main()
{
int col,row,space;
    for(col=5; col>=1;col--){
    for(space=1;space<=col-1; space++){
        printf("  ");
    }
    for(row=col; row<=5;row++){
        printf("%d ",col);
    }
        printf("\n");
    }
    return 0;
}