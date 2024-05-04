// 4. Write a Program to print the below pattern using nested for loop.
//     1 0 1 0 1
//       1 0 1 0
//         1 0 1
//           1 0
//             1



#include<stdio.h>
int main()

{
   

    for(int col=5; col>=1;col-- ){
        for(int space=0; space<=5-col; space++){
            printf("  ");
        }
        for(int row=1; row<=col; row++){
            printf("%d ",row%2);
        }
        printf("\n");
        
    }
    return 0;
}