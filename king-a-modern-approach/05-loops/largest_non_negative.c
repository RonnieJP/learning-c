#include <stdio.h>

int main(void) {

  float user_number, max_number = 0;

  do {
    printf("Enter a number: ");
    scanf("%f", &user_number);
    if (user_number > max_number) {
      max_number = user_number;
    }
  } while (user_number > 0);

  printf("\nThe largest number entered was %g", max_number);

  return 0;
}
