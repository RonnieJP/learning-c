#include <stdio.h>

int main(void) {

  int iterations;
  printf("Enter the number of iterations: ");
  scanf("%d", &iterations);

  float approximation = 1;

  for (float i = 1; i <= iterations; ++i) {
    float factorial = 1;

    for (float j = i; j > 0; --j) {
      factorial *= j;
    }

    approximation += 1 / factorial;
  }

  printf("%f", approximation);

  return 0;
}
