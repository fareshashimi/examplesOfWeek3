#include <stdio.h>

char *ara(char *str, char target) {
    while (*str != '\0') {
        if (*str == target) {
            return str;  // Return the pointer to the first occurrence of the character
        }
        str++;  // Move to the next character
    }

    return NULL;  // Return NULL if the character is not found
}

int main() {
    char inputString[] = "Hello, World!";
    char targetChar = 'H';

    char *result = ara(inputString, targetChar);

    if (result != NULL) {
        printf("Character found at position: %ld\n", result - inputString);
    } else {
        printf("Character not found.\n");
    }

    return 0;
}

