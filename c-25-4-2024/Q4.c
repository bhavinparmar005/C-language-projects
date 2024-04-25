#include <stdio.h>
int main()
{
    int hello;
    int i=1;

    printf("enter any numbers :-  ");
    scanf("%d", &hello);
    while (i<=hello)
    {
        if(i %2 !=0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}