//  Write a Program to print the below pattern using nested for loop.
 //            1
//           2 1
//         3 2 1
//       4 3 2 1
//     5 4 3 2 1 

#include<stdio.h>
int main()
{
int col,row,space;
    for(col=1; col<=5;col++){
    for(space=1;space<=5-col; space++){
        printf("  ");
    }
    for(row=col; row>=1;row--){
        printf("%d ",row);
    }
        printf("\n");
    }
    return 0;
}