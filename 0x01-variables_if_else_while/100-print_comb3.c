#include <stdio.h>

int main() {
    // Loop from 0 to 9 for the first digit
    for (int i = 0; i <= 8; i++) {
        // Loop from (i + 1) to 9 for the second digit
        for (int j = i + 1; j <= 9; j++) {
            // Print the first digit
            putchar('0' + i);
            // Print a comma followed by a space
            putchar(',');
            putchar(' ');
            // Print the second digit
            putchar('0' + j);
            // Print a newline character
            putchar('\n');
        }
    }

    return 0;
}

