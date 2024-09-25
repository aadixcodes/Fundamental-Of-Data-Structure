// C Program to Traverse an Array using a for Loop
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int N = sizeof(arr) / sizeof(arr[0]);

    // sizeof(arr): Returns the total size in bytes of the array arr. Since arr has 5 integers and each int typically occupies 4 bytes, sizeof(arr) would be 5 * 4 = 20 bytes.

    // sizeof(arr[0]): Returns the size of the first element in the array, which is an int. This is typically 4 bytes.
    
    // sizeof(arr) / sizeof(arr[0]): This gives the total number of elements in the array (20 / 4 = 5). So, N is assigned the value 5.

    // Traverse and print elements using a for loop
    
    printf("Array elements in Sequence using loop: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nArray elements in reverse using loop: ");
    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
