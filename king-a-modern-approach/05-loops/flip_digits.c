#include <stdio.h>

int main(void) {

  int user_number;

  printf("Enter an integer: ");
  scanf("%d", &user_number);

  printf("The reverse of the number is: ");
  do {
    printf("%d", user_number % 10);
    user_number /= 10;
  } while (user_number);

  printf("\n");

  return 0;
}
