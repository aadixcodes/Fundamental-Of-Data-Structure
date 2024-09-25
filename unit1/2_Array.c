// -----> What is an Array?
// An array is a collection of items of the same variable type that are stored at contiguous memory locations. It’s one of the most popular and simple data structures and is often used to implement other data structures. Each item in an array is indexed starting with 0 . Each element in an array is accessed through its index.

// ----->  Need of Array Data Structures
// Arrays are a fundamental data structure in computer science. They are used in a wide variety of applications, including:
// ** Storing data for processing
// ** Implementing data structures such as stacks and queues
// ** Representing data in tables and matrices
// ** Creating dynamic data structures such as linked lists and trees

// ----->  Types of Array
// There are two main types of arrays:
// ** One-dimensional arrays: These arrays store a single row of elements.
// ** Multidimensional arrays: These arrays store multiple rows of elements.

// ----->  Array Operations
// Common operations performed on arrays include:
// ** Traversal : Visiting each element of an array in a specific order (e.g., sequential, reverse).
// ** Insertion : Adding a new element to an array at a specific index.
// ** Deletion : Removing an element from an array at a specific index.
// ** Searching : Finding the index of an element in an array.

// ----->  Applications of Array
// Arrays are used in a wide variety of applications, including:
// ** Storing data for processing
// ** Implementing data structures such as stacks and queues
// ** Representing data in tables and matrices
// ** Creating dynamic data structures such as linked lists and trees



// C Program of Array
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int N = sizeof(arr)/sizeof(arr[0]);

    // Traverse and print elements using a for loop
    printf("Array elements are : ");
    for (int i = 0; i < N; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");

    return 0;
}
