#include <stdio.h>

int main(void) {

  int block_1, block_2, block_3;
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &block_1, &block_2, &block_3);

  printf("You entered %d.%d.%d", block_1, block_2, block_3);

  return 0;
}
