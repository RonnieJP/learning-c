#include <stdio.h>

int main(void) {

  int amount;

  printf("Enter amount in pounds (no pence allowed): ");
  scanf("%d", &amount);

  printf("£50 notes: %d\n", amount / 50);
  amount -= (amount / 50) * 50;
  printf("£20 notes: %d\n", amount / 20);
  amount -= (amount / 20) * 20;
  printf("£10 notes: %d\n", amount / 10);
  amount -= (amount / 10) * 10;
  printf(" £5 notes: %d\n", amount / 5);
  amount -= (amount / 5) * 5;
  printf(" £2 coins: %d\n", amount / 2);
  amount -= (amount / 2) * 2;
  printf(" £1 coins: %d\n", amount);

  return 0;
}
