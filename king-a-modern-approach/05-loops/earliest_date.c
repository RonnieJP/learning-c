#include <stdio.h>

int main(void) {

  int stored_day, stored_month, stored_year;
  int new_day, new_month, new_year;

  printf("Enter a date (dd/mm/yyyy): ");
  scanf("%d/%d/%d", &stored_day, &stored_month, &stored_year);

  while (stored_day != 0 || stored_month != 0 || stored_year != 0) {
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &new_day, &new_month, &new_year);

    if (new_day == 0 && new_month == 0 && new_year == 0) {
      break;
    }

    if (10000 * new_year + 100 * new_month + new_day <
        10000 * stored_year + 100 * stored_month + stored_day) {
      stored_year = new_year;
      stored_month = new_month;
      stored_day = new_day;
    }
  }
  printf("%.2d/%.2d/%.4d is the earliest date", stored_day, stored_month,
         stored_year);

  return 0;
}
