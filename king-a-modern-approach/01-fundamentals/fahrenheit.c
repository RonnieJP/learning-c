#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR 9.0f / 5.0f

int main(void) {
  float fahrenheit, celsius;

  printf("Enter Celsius temperature: ");
  scanf("%f", &celsius);

  fahrenheit = SCALE_FACTOR * celsius + FREEZING_POINT;
  printf("Fahrenheit equivalent: %.1f°F", fahrenheit);

  return 0;
}
