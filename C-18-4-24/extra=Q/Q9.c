#include<stdio.h>
int main()
{
    float principal;
    float intrest;
    float time;
    float sum;

    printf("Enter your principal amount is:-");
    scanf("%f",&principal);
    printf("Enter you intrest:-");
    scanf("%f",&intrest);
    printf("inter you time:-");
    scanf("%f",&time);
    sum=(principal*intrest*time)/100;
    if(principal <=0){
        printf("Error: All inputs must be positive numbers.\n");
        printf("404 your page not found:--------");
    }else{
        printf(" your simpal intrest is:-%.2f",sum);
    }
}