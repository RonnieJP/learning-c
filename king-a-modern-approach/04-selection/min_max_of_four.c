#include <stdio.h>

int main(void) {

  int i1, i2, i3, i4;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  int min, max;

  if (i1 < i2) {
    min = i1;
    max = i2;
  } else {
    min = i2;
    max = i1;
  }

  if (max < i3) {
    max = i3;
  } else if (min > i3) {
    min = i3;
  }

  if (max < i4) {
    max = i4;
  } else if (min > i4) {
    min = i4;
  }

  printf("Largest: %d\n", max);
  printf("Smallest: %d\n", min);

  return 0;
}
