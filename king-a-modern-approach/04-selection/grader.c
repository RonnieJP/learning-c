#include <stdio.h>

int main(void) {

  int student_score;

  printf("Enter numerical grade: ");
  scanf("%d", &student_score);

  switch (student_score / 10) {
  case 10:
    printf("Letter grade: A");
    break;
  case 9:
    printf("Letter grade: A");
    break;
  case 8:
    printf("Letter grade: B");
    break;
  case 7:
    printf("Letter grade: C");
    break;
  case 6:
    printf("Letter grade: D");
    break;
  default:
    printf("Letter grade: F");
    break;
  }

  return 0;
}
