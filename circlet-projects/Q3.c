// 3.Write a Program to print the below pattern using nested for loop.
//        5
//      4 5
//    3 4 5
//  2 3 4 5
//1 2 3 4 5

#include<stdio.h>
int main()
{

    for(int col=5; col>=1;col--){


        for(int space=1;space<=col-1;space++ ){
            printf("  ");
        }
        for(int row=col; row<=5;row++){
            printf("%d ",row); 
        }
        printf("\n");
    }
    return 0;
}