#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char *ptr = str; // Pointer to the first character of the string

    // Print the string using pointer
    printf("String: ");
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");

    // Reset pointer
    ptr = str;
    
    // Modify the string using pointer
    while (*ptr != '\0') {
        if (*ptr == 'o') {
            *ptr = 'O'; // Replace 'o' with 'O'
        }
        ptr++;
    }

    // Print modified string
    printf("Modified String: %s\n", str);

    return 0;
}
