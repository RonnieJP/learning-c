#include <math.h>
#include <stdio.h>

int main(void) {

  double x, y = 1;
  printf("Enter a positive number: ");
  scanf("%lf", &x);

  double new_y = (x / y + y) / 2;

  while (fabs(new_y - y) >= y * .00001) {
    y = new_y;
    new_y = (x / new_y + new_y) / 2;
  }

  printf("Square root: %g", new_y);

  return 0;
}
