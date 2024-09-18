#include <stdio.h>

int main() {
    // Declare an integer variable and initialize it
    int num = 10;

    // Declare a pointer variable and initialize it to the address of the integer variable
    int *ptr = &num;

    // Print the value of the integer variable
    printf("Value of num: %d\n", num);

    // Print the address of the integer variable using the pointer
    printf("Address of num: %p\n", (void *)&num);

    // Print the value of the pointer (which is the address of num)
    printf("Value of ptr (address of num): %p\n", (void *)ptr);

    // Print the value pointed to by the pointer (which is the value of num)
    printf("Value pointed to by ptr: %d\n", *ptr);

    // Modify the value of num using the pointer
    *ptr = 20;

    // Print the new value of num
    printf("New value of num: %d\n", num);

    // Print the value pointed to by the pointer to verify it has been updated
    printf("New value pointed to by ptr: %d\n", *ptr);

    return 0;
}
