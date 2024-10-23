//Null Pointer: Write a program that declares a pointer, assigns it to NULL, and checks for the null condition
//before dereferencing.

#include<stdio.h>

int main() {
    int* ptr = NULL;  // Declare a pointer and assign it to NULL (no valid address)

    // Check if the pointer is NULL before dereferencing
    if (ptr == NULL) {
        printf("Pointer is NULL. Cannot dereference.\n");
    } else {
        printf("Value pointed by ptr: %d\n", *ptr);  // Dereference the pointer (only if not NULL)
    }

    return 0;  // Return 0 to indicate successful program execution
}
