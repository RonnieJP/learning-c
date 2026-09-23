#include <stdio.h>

int main(void) {

  int user_num;
  printf("Enter a three-digit number: ");
  scanf("%d", &user_num);

  int user_units = user_num % 10;
  int user_tens = (user_num / 10) % 10;
  int user_hundreds = user_num / 100;

  int flipped_num = user_hundreds + 10 * user_tens + 100 * user_units;

  printf("The reversal is: %d", flipped_num);

  return 0;
}
