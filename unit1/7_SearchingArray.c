#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 30;
    int found = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Element %d found at index %d\n", element, found);
    } else {
        printf("Element %d not found in array\n", element);
    }

    return 0;
}
