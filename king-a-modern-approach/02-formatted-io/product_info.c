#include <stdio.h>

int main(void) {

  int item_number;
  float price;
  int day, month, year;

  printf("Enter item number: ");
  scanf("%d", &item_number);

  do {
    printf("Enter unit price: ");
    scanf("%f", &price);
  } while (price < 0 || price >= 10000);

  printf("Enter purchase date (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &day, &month, &year);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%d\t\t$%7.2f\t%.2d/%.2d/%.4d\n", item_number, price, day, month,
         year);

  return 0;
}
