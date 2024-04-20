#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age to check if a person is eligible to giving vote:-");
    scanf("%d", &age);
    if (age >= 18)

    {
        printf("you are eligible to vote \n");
    }
    else
    {
        printf("you are not eligible to vote \n \n");
    }

    printf("thank you \n");
    printf("your age checkd to givin to vote:::::");
    return 0;
}