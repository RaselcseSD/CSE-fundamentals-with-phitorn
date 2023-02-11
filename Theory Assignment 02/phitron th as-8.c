#include <stdio.h>
#include <string.h>

#define ALPHABET_SIZE 26

void shift_string(char *str, int shift) {
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    str[i] = (str[i] - 'a' + shift) % ALPHABET_SIZE + 'a';
  }
}

int main() {
  char str[100];
  int shift;

  printf("Enter a string: ");
  scanf("%s", str);

  printf("Enter the shift value: ");
  scanf("%d", &shift);

  shift_string(str, shift);

  printf("Shifted string: %s\n", str);

  return 0;
}

