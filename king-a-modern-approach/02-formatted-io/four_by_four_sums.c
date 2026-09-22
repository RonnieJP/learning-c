#include <stdio.h>

int main(void) {

  int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12,
      num13, num14, num15, num16;
  printf("Enter the numbers from 1 to 16 in any order: ");
  scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5,
        &num6, &num7, &num8, &num9, &num10, &num11, &num12, &num13, &num14,
        &num15, &num16);

  printf("\n%2.d %2.d %2.d %2.d\n", num1, num2, num3, num4);
  printf("%2.d %2.d %2.d %2.d\n", num5, num6, num7, num8);
  printf("%2.d %2.d %2.d %2.d\n", num9, num10, num11, num12);
  printf("%2.d %2.d %2.d %2.d\n", num13, num14, num15, num16);

  int row1, row2, row3, row4;
  int col1, col2, col3, col4;
  int diag_top_left, diag_top_right;

  row1 = num1 + num2 + num3 + num4;
  row2 = num5 + num6 + num7 + num8;
  row3 = num9 + num10 + num11 + num12;
  row4 = num13 + num14 + num15 + num16;

  col1 = num1 + num5 + num9 + num13;
  col2 = num2 + num6 + num10 + num14;
  col3 = num3 + num7 + num11 + num15;
  col4 = num4 + num8 + num12 + num16;

  diag_top_left = num1 + num6 + num11 + num16;
  diag_top_right = num4 + num7 + num10 + num13;

  printf("\nRow sums: %d %d %d %d\n", row1, row2, row3, row4);
  printf("Column sums: %d %d %d %d\n", col1, col2, col3, col4);
  printf("Diagonal sums: %d %d\n", diag_top_left, diag_top_right);

  return 0;
}
