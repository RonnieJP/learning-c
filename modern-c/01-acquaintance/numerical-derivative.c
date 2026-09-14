#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double F(double x) {
  double cubed = x * x * x;
  return cubed;
}

double f(double x) {
  double h = 1E-9;
  double derivative = (F(x + h) - F(x)) / h;
  return derivative;
}

int main(int argc, char *argv[argc + 1]) {
  double numericalDerivative = f(5);
  printf("%g\n", numericalDerivative);
  printf("%g\n", 3.0 * 5.0 * 5.0);
  return EXIT_SUCCESS;
}
