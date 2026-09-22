#include <stdio.h>

int main(void) {

  float x;

  printf("Enter the value for x: ");
  scanf("%f", &x);

  float result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 is %f", result);

  return 0;
}
