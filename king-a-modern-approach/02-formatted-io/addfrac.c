#include <stdio.h>

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

int main(void) {

  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter the first fraction: ");
  scanf("%d/%d", &num1, &denom1);

  printf("Enter the second fraction: ");
  scanf("%d/%d", &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;

  int common_factor = gcd(result_num, result_denom);

  result_num /= common_factor;
  result_denom /= common_factor;

  printf("The sum is %d/%d\n", result_num, result_denom);

  return 0;
}
