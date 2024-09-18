#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    // Traversing array using pointer
    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Modifying array elements using pointer
    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) + 10;
    }

    // Output modified array
    printf("Modified array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
