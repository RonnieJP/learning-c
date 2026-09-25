#include <stdio.h>

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

int main(void) {
  int i1, i2;
  printf("Enter two integers: ");
  scanf("%d%d", &i1, &i2);
  printf("Greatest common divisor: %d", gcd(i1, i2));
  return 0;
}
