// Write C Program to find gross salary by adding % of HRA, DA, and TA of user choice
#include<stdio.h>

int main()
{
    int base_salary ;
    int hra;
    int da ;
    int ta ;
    int sum;


    printf("Enter your base salary:-");
    scanf("%d",& base_salary);
    printf("enter your hra:-");
    scanf("%d",&hra);
    printf("enter your da:-");
    scanf("%d",&da);
    printf("enter your ta:-");
    scanf("%d",&ta);

    hra=(base_salary*hra)/100;
      da=(base_salary*da)/100;  
      ta=(base_salary*ta)/100;

    sum=("%d",base_salary+hra+da+ta);
    printf("your gross salary:- %d",sum);


}
