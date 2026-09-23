#include <stdio.h>

int main(void) {

  int user_num;
  printf("Enter a three-digit number: ");
  scanf("%d", &user_num);

  printf("The reversal is: %d", (user_num / 100) + 10 * ((user_num / 10) % 10) +
                                    100 * (user_num % 10));

  return 0;
}
