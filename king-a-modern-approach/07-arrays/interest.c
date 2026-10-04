#include <stdio.h>

#define NUMBER_OF_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void) {

  double interest_rate;
  unsigned short number_of_years;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%lf", &interest_rate);
  printf("Enter number of years: ");
  scanf("%hu", &number_of_years);

  printf("\nYears");
  for (unsigned int i = 0; i < NUMBER_OF_RATES; ++i) {
    printf("%6lg%%", interest_rate + (double)i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (size_t year = 1; year <= number_of_years; ++year) {
    printf("%3zu    ", year);
    for (size_t i = 0; i < NUMBER_OF_RATES; ++i) {
      value[i] += value[i] * (interest_rate + i) / 100;
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }

  return 0;
}
