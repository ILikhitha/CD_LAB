#include <ctype.h>
#include <stdio.h>
int main() {
  char c;
  printf("\nEnter the character: ");
  scanf("%s", &c);
  if(isdigit(c)) {
    printf("Valid. It is a digit.");
  } else {
    printf("Invalid. It is not a digit.");
  }
}
