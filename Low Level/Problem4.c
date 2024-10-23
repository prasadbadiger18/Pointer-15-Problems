//Pointer to Pointer: Declare an integer, a pointer to it, and a pointer to the pointer. Use them to print the value.

#include<stdio.h>

int main() {
    int a = 10;     // Declare an integer 'a' and initialize it to 10
    int* ptr = &a;  // Declare a pointer 'ptr' that stores the address of 'a'
    int** pptr = &ptr;  // Declare a pointer to a pointer 'pptr' that stores the address of 'ptr'

    // Print the value of 'a' using the pointer to pointer 'pptr'
    printf("Value of a (using pointer to pointer): %d\n", **pptr);

    // Additional details for clarity
    printf("Address of a: %p\n", &a);         // Print the address of 'a'
    printf("Address stored in ptr: %p\n", ptr);   // Print the address stored in 'ptr' (which is the address of 'a')
    printf("Address of ptr: %p\n", &ptr);     // Print the address of 'ptr'
    printf("Address stored in pptr: %p\n",pptr); // Print the address stored in 'pptr' (which is the address of 'ptr')

    return 0;  // Return 0 to indicate successful execution
}
