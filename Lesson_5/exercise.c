#include <stdio.h>
#include <stdlib.h>

int main() {
  float price;
  int discount;
  float final_price;
  //ask the user to insert the price and the discount
  printf("Insert the price: ");
  scanf("%f", &price);
  printf("Insert the discount: ");
  scanf("%d", &discount);
  float discount_money = (price/100)*discount;
  final_price = price - discount_money;
  printf("Final price: %f\n",final_price);
  //Final price: <number>
  return 0;
}
