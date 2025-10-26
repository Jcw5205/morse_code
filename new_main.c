#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 1024

// Morse code lookup table for A–Z, 0–9
const char *morse_table[] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
    "..-", "...-", ".--", "-..-", "-.--", "--.."
};

const char *num_table[] = {
    "-----", ".----", "..---", "...--", "....-", ".....",
    "-....", "--...", "---..", "----."
};

void to_morse(const char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        char c = toupper(text[i]);

        if (c >= 'A' && c <= 'Z') {
            printf("%s ", morse_table[c - 'A']);
        } else if (c >= '0' && c <= '9') {
            printf("%s ", num_table[c - '0']);
        } else if (isspace(c)) {
            printf("_ "); // Slash to separate words
        } else {
            printf("? "); // Unknown character
        }
    }
    printf("\n");
}

int main() {
    char input[MAX_LEN];

    printf("Enter text to convert to Morse code:\n> ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Remove newline
        input[strcspn(input, "\n")] = '\0';
        printf("\nMorse code:\n");
        to_morse(input);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}

