#include <ctype.h>
#include <stdio.h>

int main(void) {

  char ch;
  size_t number_of_vowels = 0;

  printf("Enter a sentence: ");
  ch = getchar();
  while (ch != '\n') {
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      number_of_vowels++;
    }
    ch = getchar();
  }

  printf("Your sentence contains %zu vowels.\n", number_of_vowels);

  return 0;
}
