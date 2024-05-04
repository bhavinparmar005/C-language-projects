//  6 Write a Program to print the below pattern using nested for loop.
// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
//         5

#include<stdio.h>
int main()

{


    for(int col=1; col<=5;col++){


        for(int space=1; space<col; space++){
            printf("  ");
        }
        
        for(int row=5; row>=col; row--){
            printf("%d ",row);
        }
        printf("\n");
    }
    return 0;
}