#include <stdio.h>

int main(void) {

  int upper_bound;
  printf("Enter the upper bound for even squares: ");
  scanf("%d", &upper_bound);

  int i = 2;
  while (i * i <= upper_bound) {
    printf("%d\n", i * i);
    i++;
    i++;
  }

  return 0;
}
