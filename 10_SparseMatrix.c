//  The program defines a 4x5 sparse matrix with mostly zero values.

#include <stdio.h>

int main() {
    int sparseMatrix[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

//  Counting Non-Zero Elements: It traverses the matrix to count how many non-zero elements are present.
    int size = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sparseMatrix[i][j] != 0) {
                size++;
            }
        }
    }

//  Compact Representation: It creates a compact matrix to store the row index, column index, and the non-zero element itself. This compact form has three rows:
// Row 1: Row indices of non-zero elements
// Row 2: Column indices of non-zero elements
// Row 3: Non-zero elements
    int compactMatrix[3][size];
    int k = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if (sparseMatrix[i][j] != 0) {
                compactMatrix[0][k] = i;
                compactMatrix[1][k] = j;
                compactMatrix[2][k] = sparseMatrix[i][j];
                k++;
            }
        }
    }

//  Output: The compact matrix is then printed, showing only the non-zero elements and their positions.
    printf("Sparse Matrix in compact form:\n");
    for (int i = 0; i < size; i++) {
        printf("%d %d %d\n", compactMatrix[0][i], compactMatrix[1][i], compactMatrix[2][i]);
    }

    return 0;
}


//  OUTPUT 
// This is a 4x5 matrix with most elements being zero. The non-zero elements are:

// 3 at position (0, 2)   // 0 2 3 
// 4 at position (0, 4)   // 0 4 4 
// 5 at position (1, 2)   // 1 2 5 
// 7 at position (1, 3)   // 1 3 7
// 2 at position (3, 1)   // 3 1 2
// 6 at position (3, 2)   // 3 2 6 