#include <stdio.h>

int main(void) {

  float radius;

  printf("Enter the radius of the sphere: ");
  scanf("%f", &radius);

  float volume = 4.0f / 3.0f * 3.14159265359f * radius * radius * radius;

  printf("The volume of the sphere is %f", volume);

  return 0;
}
