#include <stdio.h>
int main()
{
    float units;
    float rupiya;
    float total_rupiya;
    float vadara_na_rupiya; 
    printf("input electricity unit charges and calculate the total electricity bill according to the given condition:\n\n");

    printf("For the first 50 units Rs. 0.50/unit.\n");
    printf("For the next 100 units Rs. 0.75/unit.\n");
    printf("For the next 100 units Rs. 1.20/unit.\n");
    printf("For units above 250 Rs. 1.50/unit.\n");
    printf("An additional surcharge of 20%% is added to the bill.\n\n");
    printf("Enter electricity units:- ");
    scanf("%f", &units);

    if (units <= 50)
    {
        rupiya = units * 0.50;
    }
    else if (units <= 150)
    {
        rupiya = 50*0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        rupiya = 50*0.50+100*0.75+ (units - 150) * 1.20;
    }
    else
    {

        rupiya = 50*0.50+100*0.75+100*1.2+(units - 250) * 1.50;
    }
    vadara_na_rupiya = rupiya * 0.20;
    total_rupiya = rupiya + vadara_na_rupiya;

    printf("Electricity Bill  Rs:- %.2f", total_rupiya);

    return 0;
}