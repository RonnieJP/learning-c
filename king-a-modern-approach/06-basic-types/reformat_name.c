#include <stdio.h>

int main(void) {

  char first_name_initial;
  char ch;

  printf("Enter a first and last name: ");
  scanf(" %c", &first_name_initial);
  while ((ch = getchar()) != ' ') {
  }
  while ((ch = getchar()) == ' ') {
  }
  do {
    printf("%c", ch);
    ch = getchar();
  } while (ch != ' ' && ch != '\n');
  printf(", %c.", first_name_initial);

  return 0;
}
