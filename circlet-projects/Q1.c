// 1 Write a Program to print the below pattern using nested for loop.
// 41
// 41 42
// 41 42 43
// 41 42 43 44
// 41 42 43 44 45



#include<stdio.h>
int main()
{
    int col;
    int row;
  

    for(col=41; col<=45;col++){

        for(row=41; row<=col;row++){
            printf("%d  ",row);
           
        }
        printf("\n");
    }
     return 0;
}