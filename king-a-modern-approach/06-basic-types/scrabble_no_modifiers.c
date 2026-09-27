#include <ctype.h>
#include <stdio.h>

int main(void) {

  char ch;

  printf("Enter a word: ");
  ch = getchar();

  size_t score = 0;

  while (ch != '\n') {
    switch (toupper(ch)) {
    case 'A':
      score += 1;
      break;
    case 'E':
      score += 1;
      break;
    case 'I':
      score += 1;
      break;
    case 'L':
      score += 1;
      break;
    case 'N':
      score += 1;
      break;
    case 'O':
      score += 1;
      break;
    case 'R':
      score += 1;
      break;
    case 'S':
      score += 1;
      break;
    case 'T':
      score += 1;
      break;
    case 'U':
      score += 1;
      break;
    case 'D':
      score += 2;
      break;
    case 'G':
      score += 2;
      break;
    case 'B':
      score += 3;
      break;
    case 'C':
      score += 3;
      break;
    case 'M':
      score += 3;
      break;
    case 'P':
      score += 3;
      break;
    case 'F':
      score += 4;
      break;
    case 'H':
      score += 4;
      break;
    case 'V':
      score += 4;
      break;
    case 'W':
      score += 4;
      break;
    case 'Y':
      score += 4;
      break;
    case 'K':
      score += 5;
      break;
    case 'J':
      score += 8;
      break;
    case 'X':
      score += 8;
      break;
    case 'Q':
      score += 10;
      break;
    case 'Z':
      score += 10;
      break;
    }
    ch = getchar();
  }

  printf("Scrabble value: %zu\n", score);
  return 0;
}
