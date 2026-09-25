#include <stdio.h>

int main(void) {

  int days_in_month, starting_day_of_week;
  printf("Enter number of days in month: ");
  scanf("%d", &days_in_month);
  printf("Enter starting day of the week (1=Mon, 7=Sun): ");
  scanf("%d", &starting_day_of_week);

  for (int i = 1; i < starting_day_of_week; ++i) {
    printf("   ");
  }
  for (int j = 1; j <= days_in_month; ++j) {
    printf("%2.d ", j);
    if (!((j + starting_day_of_week - 1) % 7)) {
      printf("\n");
    }
  }

  return 0;
}
