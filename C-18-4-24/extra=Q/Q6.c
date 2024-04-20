#include <stdio.h>
int main()
{
    int temperature;
    printf("this program that categirizes a given temperature into hot,medium,hot....\n\n");
    printf("Enter your temperature value:-");
    scanf("%d", &temperature);
    if (temperature >= 10 && temperature <= 35)
    {
        printf("your temperature is medium");
    }
    else if (temperature >= 36)
    {
        printf("your temperature is hot");
    }
    else
    {
        printf("your tepreture is cold");
    }

    return 0;
}