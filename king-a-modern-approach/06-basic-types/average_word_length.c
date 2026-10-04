#include <stdio.h>

int main(void) {

  size_t total_length = 0, number_of_words = 1;
  char ch;

  printf("Enter a sentence: ");
  ch = getchar();

  while (ch != '\n') {
    if (ch == ' ') {
      number_of_words++;
    } else {
      total_length++;
    }
    ch = getchar();
  }
  printf("Average word length: %.1f", (float)total_length / number_of_words);

  return 0;
}
