#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isOperator(char c) {
  return (c=='+' || c=='-' || c=='*' || c=='/' || c=='%' || c=='=');
}

void printOperators(const char *str) {
  printf("Operators found in the string: ");
  while (*str) {
    if (isOperator(*str)) {
      printf("%c ", *str);
    }
    str++;
  }
  printf("\n");
}

int main() {
  char input[100];
  printf("Enter a string: ");
  fgets(input, sizeof(input), stdin);

  printf("\n");
  printOperators(input);

  return 0;
}
