// A one-dimensional array is a list of variables of the same type, accessed using a single index. 

#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    // Traversal
    printf("One-dimensional array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
