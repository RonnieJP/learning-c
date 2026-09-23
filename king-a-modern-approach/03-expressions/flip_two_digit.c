#include <stdio.h>

int main(void) {

  int user_num;
  printf("Enter a two-digit number: ");
  scanf("%d", &user_num);

  printf("The reversal is: %d", (user_num % 10) * 10 + user_num / 10);

  return 0;
}
