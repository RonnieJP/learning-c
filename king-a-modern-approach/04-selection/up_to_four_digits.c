#include <stdio.h>

int main(void) {

  int user_num;
  printf("Enter a number: ");
  scanf("%d", &user_num);

  if (user_num < 10) {
    printf("The number %d has 1 digit.", user_num);
  } else if (user_num < 100) {
    printf("The number %d has 2 digits.", user_num);
  } else if (user_num < 1000) {
    printf("The number %d has 3 digits.", user_num);
  } else if (user_num < 10000) {
    printf("The number %d has 4 digits.", user_num);
  } else {
    printf("The number %d has more than 4 digits.", user_num);
  }

  return 0;
}
