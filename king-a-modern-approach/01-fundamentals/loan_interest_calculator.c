#include <stdio.h>

void balance_update(float *balance_ptr, float monthly_interest,
                    float monthly_payment) {
  *balance_ptr = *balance_ptr * (1 + monthly_interest / 100) - monthly_payment;
}

int main(void) {

  float balance, gross_interest_yearly, monthly_interest, monthly_payment;

  printf("Enter amount of loan: ");
  scanf("%f", &balance);
  printf("Enter gross yearly interest rate: ");
  scanf("%f", &gross_interest_yearly);
  monthly_interest = gross_interest_yearly / 12;
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);
  printf("\n");

  balance_update(&balance, monthly_interest, monthly_payment);
  printf("Balance remaining after first payment: £%.2f\n", balance);
  balance_update(&balance, monthly_interest, monthly_payment);
  printf("Balance remaining after second payment: £%.2f\n", balance);
  balance_update(&balance, monthly_interest, monthly_payment);
  printf("Balance remaining after third payment: £%.2f\n", balance);

  return 0;
}
