#include<stdio.h>
int main()
{

    int number;
    
    int first=0;
    int second=1;
    int sum;
    printf("program to prin the fibonacci seried\n");
    printf("Enter any number:-  ");
    scanf("%d",&number);
   
   for (int hello =1 ;hello<= number;hello++) {
    sum=first+second;
    first=second;
    second=sum;
    printf("%d\t",sum);
   }
}