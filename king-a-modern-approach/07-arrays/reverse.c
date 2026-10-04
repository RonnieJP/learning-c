#include <stdio.h>

#define N 10

int main(void) {

  printf("Enter 10 numbers: ");

  int a[N], i;
  for (i = 0; i < N; ++i) {
    scanf("%d", &a[i]);
  }

  printf("In reverse order:");
  for (i = N - 1; i >= 0; --i) {
    printf(" %d", a[i]);
  }
  printf("\n");

  return 0;
}
