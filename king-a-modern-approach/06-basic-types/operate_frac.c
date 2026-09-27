#include <stdio.h>

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcd(b, a % b);
  }
}

int add_numerator(int num1, int denom1, int num2, int denom2) {
  return num1 * denom2 + num2 * denom1;
}

int add_denominator(int denom1, int denom2) { return denom1 * denom2; }

int subtract_numerator(int num1, int denom1, int num2, int denom2) {
  return add_numerator(num1, denom1, -num2, denom2);
}

int subtract_denominator(int denom1, int denom2) {
  return add_denominator(denom1, denom2);
}

int multiply_numerator(int num1, int num2) { return num1 * num2; }

int multiply_denominator(int denom1, int denom2) { return denom1 * denom2; }

int divide_numerator(int num1, int denom2) { return num1 * denom2; }

int divide_denominator(int denom1, int num2) { return denom1 * num2; }

int main(void) {

  int num1, denom1, num2, denom2, result_num, result_denom;
  char operator;

  printf("Enter two fractions separated by the operator: ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &operator, &num2, &denom2);

  if (!(denom1 && denom2)) {
    printf("Denominator 0. Invalid rational number.");
    return 0;
  }

  switch (operator) {
  case '+':
    result_num = add_numerator(num1, denom1, num2, denom2);
    result_denom = add_denominator(denom1, denom2);
    break;
  case '-':
    result_num = subtract_numerator(num1, denom1, num2, denom2);
    result_denom = subtract_denominator(denom1, denom2);
    break;
  case '*':
    result_num = multiply_numerator(num1, num2);
    result_denom = multiply_denominator(denom1, denom2);
    break;
  case '/':
    if (!num2) {
      printf("Cannot divide by zero.");
      return 0;
    }
    result_num = divide_numerator(num1, denom2);
    result_denom = divide_denominator(denom1, num2);
    break;
  }

  int common_factor = gcd(result_num, result_denom);

  result_num /= common_factor;
  result_denom /= common_factor;

  printf("The result is %d/%d\n", result_num, result_denom);

  return 0;
}
