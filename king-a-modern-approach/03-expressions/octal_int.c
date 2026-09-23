#include <stdio.h>

int main(void) {

  printf("Enter a number between 0 and 32767: ");
  int user_num;
  scanf("%d", &user_num);

  int dig0, dig1, dig2, dig3, dig4;
  dig0 = user_num % 8;
  user_num /= 8;
  dig1 = user_num % 8;
  user_num /= 8;
  dig2 = user_num % 8;
  user_num /= 8;
  dig3 = user_num % 8;
  user_num /= 8;
  dig4 = user_num % 8;

  printf("In octal, your number is: %d%d%d%d%d", dig4, dig3, dig2, dig1, dig0);

  return 0;
}
