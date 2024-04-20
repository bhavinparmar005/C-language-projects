#include <stdio.h>
int main()
{
  float amount;
  float final_amount;
  float discount = 0;

  printf("Company that offers discount to customers based on ther total purchase amount\n\n");

  printf("Enter your amount :-");
  scanf("%f", &amount);

  if (amount < 100)

  {
    printf("your amount is less ₹100 you will not get discount...");
    }
  else if (amount > 100 && amount < 500)

  {
    printf("you get 5%% discount ");
    discount = amount * 0.05;
    final_amount = amount - discount;
  }
  else if (amount > 500 && amount < 1000)
  {
    printf("you get 10%% discount ");
    discount = amount * 0.10;
    final_amount = amount - discount;
  }

  else
  {
    printf("you get 15%% discount \n\n");
    discount = amount * 0.15;
    final_amount = amount - discount;
  }
  printf("your  amount:-$ %.2f\n", amount);
  printf("Discount amount id:-$ %.2f\n", discount);
  printf("Final amount after discount:-$ %.2f\n", final_amount);
  printf("visit shop again\n\n");
  printf("thank you for shopping........\n\n");
  return 0;
}