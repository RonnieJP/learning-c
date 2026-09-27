#include <stdio.h>

int main(void) {

  char ch;

  printf("Enter phone number: ");
  ch = getchar();
  while (ch != '\n') {

    switch (ch) {
    case 'A':
      putchar('2');
      break;
    case 'B':
      putchar('2');
      break;
    case 'C':
      putchar('2');
      break;
    case 'D':
      putchar('3');
      break;
    case 'E':
      putchar('3');
      break;
    case 'F':
      putchar('3');
      break;
    case 'G':
      putchar('4');
      break;
    case 'H':
      putchar('4');
      break;
    case 'I':
      putchar('4');
      break;
    case 'J':
      putchar('5');
      break;
    case 'K':
      putchar('5');
      break;
    case 'L':
      putchar('5');
      break;
    case 'M':
      putchar('6');
      break;
    case 'N':
      putchar('6');
      break;
    case 'O':
      putchar('6');
      break;
    case 'P':
      putchar('7');
      break;
    case 'R':
      putchar('7');
      break;
    case 'S':
      putchar('7');
      break;
    case 'T':
      putchar('8');
      break;
    case 'U':
      putchar('8');
      break;
    case 'V':
      putchar('8');
      break;
    case 'W':
      putchar('9');
      break;
    case 'X':
      putchar('9');
      break;
    case 'Y':
      putchar('9');
      break;
    default:
      putchar(ch);
      break;
    }
    ch = getchar();
  }

  printf("\n");

  return 0;
}
