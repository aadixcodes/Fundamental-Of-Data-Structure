#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int *ptr = &arr[0][0]; // Pointer to the first element of the 2D array

    // Traversing 2D array using pointer
    printf("2D array elements using pointer:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", *(ptr + i * 3 + j));
        }
        printf("\n");
    }

    return 0;
}
