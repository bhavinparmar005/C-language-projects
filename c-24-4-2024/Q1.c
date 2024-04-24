#include<stdio.h>
int main()
{
    int number;

    printf("chek your number is odd ya even\n\n");
    printf("enter your number :- ");
    scanf("%d",&number);



    (number %2==0)? printf("this number is even: ",number):printf("this number is odd : ",number);
    return 0;
}