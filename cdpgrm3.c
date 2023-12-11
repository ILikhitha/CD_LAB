//Write a c program to check the letter is in lower case alphabet
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase alphabet letter.\n", ch);
    } else {
        printf("%c is not a lowercase alphabet letter.\n", ch);
    }

    return 0;
}
