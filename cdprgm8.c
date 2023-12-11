//Program to count number of characters in a statement
#include <stdio.h>
#include <string.h>

int main() {
    char statement[100];
    printf("Enter a statement:");
    fgets(statement, sizeof(statement), stdin);
    int length = strlen(statement)-1;
    printf("Number of characters in the statement: %d\n", length);

    return 0;
}
