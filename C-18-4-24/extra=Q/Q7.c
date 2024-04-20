#include <stdio.h>
int main()
{
   int first_number;
   int second_number;
   int third_number;


   printf("Enter your first number:-");
   scanf("%d", &first_number);
   printf("Enter your secound number:-");
   scanf("%d", &second_number);
   printf("Enter your third number:-");
   scanf("%d", &third_number);

   if (first_number >= second_number && first_number >= third_number)
   {
      printf("your largest number is :-%d", first_number);
   }
   else if (second_number >= first_number && second_number >= first_number)
   {
      printf("your largest number is :-%d", second_number);
   }
   else
   {
      printf("your largest number is :-%d", third_number);
   }

   return 0;
}