#include <stdio.h>
int main()
{
    int hello;
    int i;
  printf("enter frist year  :-  ");
    scanf("%d", &i);
    printf("enter second year  :-  ");
    scanf("%d", &hello);
    while (i<=hello)
    {
        if(i %4  ==0){
            printf("%d\n",i);
        }
        i++;
    }
}