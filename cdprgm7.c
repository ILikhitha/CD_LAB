#include <stdio.h>
#include <string.h>

#define END_STRING "END"

int main() {
    char statement[100];
    int lines = 0;
    printf("Enter a statement (type 'END' to end input):\n");
    while (fgets(statement, sizeof(statement), stdin) != NULL) {
        if (strncmp(statement, END_STRING, strlen(END_STRING)) == 0) {
            break;
        }
        lines++;
    }
    printf("Number of lines in the statement: %d\n", lines);

    return 0;
}
