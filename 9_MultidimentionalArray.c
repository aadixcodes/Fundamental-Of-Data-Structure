// A three-dimensional array arr of size 2x2x2 is declared and initialized.
// ---> This array has:
// ** 2 blocks (first dimension)
// ** Each block has 2 rows (second dimension)
// ** Each row has 2 columns (third dimension)
// ** The values are initialized as follows:
// ** Block 1: {{1, 2}, {3, 4}}
// ** Block 2: {{5, 6}, {7, 8}}


// ---> x, y, and z represent the dimensions of the array:
// ** x = 2: Number of blocks
// ** y = 2: Number of rows in each block
// ** z = 2: Number of columns in each row


#include <stdio.h>

int main() {
    int arr[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    int x = 2, y = 2, z = 2;

    // Traversal
    printf("Multi-dimensional array elements:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}
