#include <stdio.h>

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Output string
    printf("You entered: %s", str);

    // String length
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (str[length - 1] == '\n') {
        length--; // Remove newline character from length
    }
    printf("Length of the string: %d\n", length);

    return 0;
}
