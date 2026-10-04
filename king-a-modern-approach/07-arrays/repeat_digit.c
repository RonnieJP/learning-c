#include <stdio.h>

int main(void) {

  bool digit_seen[10] = {false};
  unsigned long n;

  printf("Enter a number: ");
  scanf("%lu", &n);

  while (n > 0) {
    int digit = n % 10;
    if (digit_seen[digit]) {
      break;
    }
    digit_seen[digit] = true;
    n /= 10;
  }

  printf((n > 0) ? "Repeated digit\n" : "No repeated digit\n");

  return 0;
}
