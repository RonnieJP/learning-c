#include <stdio.h>

int main(void) {

  int day1, month1, year1, day2, month2, year2;

  printf("Enter first date (dd/mm/yy): ");
  scanf("%d/%d/%d", &day1, &month1, &year1);

  printf("Enter second date (dd/mm/yy): ");
  scanf("%d/%d/%d", &day2, &month2, &year2);

  if (year1 < year2) {
    printf("%d/%d/%d is earlier than %d/%d/%d", day1, month1, year1, day2,
           month2, year2);
  } else if (year2 < year1) {
    printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day1,
           month1, year1);
  } else if (month1 < month2) {
    printf("%d/%d/%d is earlier than %d/%d/%d", day1, month1, year1, day2,
           month2, year2);
  } else if (month2 < month1) {
    printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day1,
           month1, year1);
  } else if (day1 < day2) {
    printf("%d/%d/%d is earlier than %d/%d/%d", day1, month1, year1, day2,
           month2, year2);
  } else if (day2 < day1) {
    printf("%d/%d/%d is earlier than %d/%d/%d", day2, month2, year2, day1,
           month1, year1);
  } else {
    printf("Dates are the same.");
  }

  return 0;
}
