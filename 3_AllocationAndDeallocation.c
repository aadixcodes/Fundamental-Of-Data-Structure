// Dynamic memory allocation
// C does not have language support for dynamically allocating new ‘things’. Instead, the programmer has to call a library function called malloc() to allocate a new chunk of memory from the heap segment, and later call free() to return that chunk of memory to the heap. The programmer has to remember to initialize the chunk of bytes received from malloc() – which otherwise should be assumed to contain random data. The programmer has to be careful allocate a large enough chunk to hold the data she intends to store there, and not to use pointers to write “outside” that chunk of memory. Lots of flexibility and power - but as with any great power, you must take great care in using it.  

// malloc():
//  malloc stands for memory allocation. As can be guessed by its name, it requests memory from the heap and returns a pointer to the memory. The pointer is of the void type, so that we can typecast it for any variables. All the values at the allocation time are initialized to garbage values. Its syntax is simple as we have to provide the memory space along with the size we want in bytes. 

//  calloc():
// calloc stands for contiguous allocation. It also requests memory from the heap and returns a pointer to the memory and has the same functionality as malloc(), two main differences, though. We have to send as parameters the number of blocks needed along with their size. The second difference is a major one. That is, in calloc(), the values at the allocation time are initialized to 0 instead of garbage value. 

// realloc():
// realloc stands for reallocation. It is used in cases where the dynamic memory is insufficient or wants to increase the already allocated memory to store more data. Its syntax is simple as we just have to overwrite the memory already allocated as a parameter in the function while providing the data related to the pointer. 

// free():
// As we discussed earlier, while discussing the disadvantages of dynamic memory allocation that we have to free up the allocated memory space manually as there is no automatic procedure for that. So free is used to free up the space occupied by the allocated memory. Its syntax is the easiest of all, as we have to send the pointer as a parameter inside the function.


#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dynamic memory allocation using malloc
    int *arr;
    int n;

    // Asking for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocating memory dynamically for n integers using malloc
    arr = (int *)malloc(n * sizeof(int)); // Allocates memory for n integers

    // Check if the memory allocation was successful
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        exit(1); // Exit the program if memory allocation failed
    } else {
        // Memory allocation successful, assign values to the array
        printf("Memory successfully allocated using malloc.\n");

        // Assign values to the array
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1; // Storing values in the array
        }

        // Displaying the elements of the dynamically allocated array
        printf("The elements of the array are: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
// ------------------------------------------------------------------------------------------------------------------------
        // Re-allocating memory using realloc to increase the array size
        int newSize = n + 2;
        arr = (int *)realloc(arr, newSize * sizeof(int)); // Expanding the memory

        if (arr == NULL) {
            printf("Memory reallocation failed.\n");
            exit(1);
        } else {
            printf("\nMemory successfully reallocated using realloc.\n");

            // Adding more elements to the reallocated array
            for (int i = n; i < newSize; i++) {
                arr[i] = i + 1; // Assign values to the new part of the array
            }

            // Displaying the new elements of the array after reallocation
            printf("The elements of the array after reallocation are: ");
            for (int i = 0; i < newSize; i++) {
                printf("%d ", arr[i]);
            }
        }
        // ------------------------------------------------------------------------------------------------------------------------

        // Freeing the dynamically allocated memory
        free(arr); // De-allocates the memory
        printf("\nMemory successfully deallocated.\n");
    }

    return 0;
}
