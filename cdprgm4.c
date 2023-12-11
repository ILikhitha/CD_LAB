//Write a c program to check the letter is in upper case alphabet
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase alphabet letter.\n", ch);
    } else {
        printf("%c is not an uppercase alphabet letter.\n", ch);
    }

    return 0;
}

