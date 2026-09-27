#include <stdio.h>

int main(void) {

  unsigned long user_number;

  printf("Enter an integer: ");
  scanf("%lu", &user_number);

  printf("The reverse of the number is: ");
  do {
    printf("%lu", user_number % 10);
    user_number /= 10;
  } while (user_number);

  printf("\n");

  return 0;
}
