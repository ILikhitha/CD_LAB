#include <stdio.h>
#include <string.h>

int isKeyword(char *word) {
    char keywords[][10] = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed", "sizeof",
        "static", "struct", "switch", "typedef", "union", "unsigned", "void",
        "volatile", "while"
    };

    int i;
    for (i = 0; word[i]; i++) {
        word[i] = tolower(word[i]);
    }
    for (i = 0; i < sizeof(keywords) / sizeof(keywords[0]); i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1; 
        }
    }

    return 0;
}

int main() {
    char word[20];
    printf("Enter a word: ");
    scanf("%s", word);
    if (isKeyword(word)) {
        printf("%s is a C keyword.\n", word);
    } else {
        printf("%s is not a C keyword.\n", word);
    }

    return 0;
}

    
