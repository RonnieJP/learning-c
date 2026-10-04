#include <stdio.h>

double evaluate(double a, char operator, double b) {
  switch (operator) {
  case '+':
    return a + b;
  case '-':
    return a - b;
  case '*':
    return a * b;
  case '/':
    return b ? a / b : a;
  }
  return a;
}

int main(void) {

  double cumulative_value;
  char operator;
  double operand;

  printf("Enter an expression: ");
  scanf("%lf", &cumulative_value);

  operator = getchar();

  while (operator != '\n') {
    scanf("%lf", &operand);
    cumulative_value = evaluate(cumulative_value, operator, operand);
    operator = getchar();
  }

  printf("Value of expression: %lg", cumulative_value);

  return 0;
}
