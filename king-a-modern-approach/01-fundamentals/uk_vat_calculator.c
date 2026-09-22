#include <stdio.h>

int main(void) {

  float no_tax_amount;
  printf("Enter amount in £ without VAT: £");
  scanf("%f", &no_tax_amount);

  float vat = no_tax_amount * 0.2;
  float total_with_vat = no_tax_amount + vat;

  printf("VAT: £%.2f\n", vat);
  printf("Total with VAT: £%.2f\n", total_with_vat);

  return 0;
}
