// 1.Dynamic Memory Allocation: Allocate an array of integers dynamically using malloc and free the memory after use.


#include<stdio.h>
#include<stdlib.h>  // Include the standard library for malloc and free

int main() {
    int n = 5;  // Declare an integer 'n' for the size of the array
    int* array = malloc(n * sizeof(int));  // Dynamically allocate memory for an array of 'n' integers

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program with a non-zero value to indicate failure
    }

    // Initialize the array elements
    for (int i = 0; i < n; i++) {
        array[i] = i + 1;  // Assign values 1 to 5
    }

    // Print the array elements
    for (int i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    // Free the dynamically allocated memory
    free(array);

    return 0;  // Return 0 to indicate successful execution
}
