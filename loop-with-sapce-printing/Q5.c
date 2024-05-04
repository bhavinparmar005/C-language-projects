// .5 Write a Program to print the below pattern using nested for loop.
// 5 4 3 2 1
//   4 3 2 1
//     3 2 1
//       2 1 
//         1

#include<stdio.h>
int main()

{


    for(int col=5; col>=1;col-- ){
        for(int space=1; space<=5-col; space++){
            printf("  ");
        }
        
        for(int row=col; row>=1; row--){
            printf("%d ",row);
        }
        printf("\n");
    }
    return 0;
}