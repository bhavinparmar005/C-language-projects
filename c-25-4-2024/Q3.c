#include <stdio.h>
int main()
{
    int hello;
    int i=1;

    printf("enter any numbers :-  ");
    scanf("%d", &hello);
    while (i<=hello)
    {
        printf("%d\n", i);
        i++;
        
    }
 
    return 0;
}