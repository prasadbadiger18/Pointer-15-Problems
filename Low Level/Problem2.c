//Pointer Arithmetic: Create a program to demonstrate how pointer arithmetic works with arrays 
//(e.g., print elements of an array using pointer increment).


#include<stdio.h>  // Include standard input-output library

int main() {
    int array[5] = {1, 2, 3, 4, 5};  // Declare and initialize an array of 5 integers
    int* ptr = array;  // Declare a pointer 'ptr' and initialize it to point to the first element of the array

    // Loop through the array using pointer arithmetic
    for(int i = 0; i < 5; i++) {
        // Print the index (i+1), the value at *(ptr + i), and optionally the address
        printf("Element %d: %d\n", i + 1, *(ptr + i));  // Dereference pointer to get the element value
    }

    return 0;  // Return 0 to indicate successful program execution
}
