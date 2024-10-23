//Swapping Values – Problem 3 (Pointers as Function Arguments, Call by Reference)

#include<stdio.h>  // Include standard input-output library

// Function to swap two integers using pointers
void swap(int* x, int* y) {
    int temp = *x;   // Store the value pointed by 'x' in 'temp'
    *x = *y;         // Assign the value pointed by 'y' to 'x'
    *y = temp;       // Assign the value stored in 'temp' to 'y'
}

int main() {
    int a = 10;  // Declare integer 'a' and assign value 10
    int b = 20;  // Declare integer 'b' and assign value 20

    // Print the values before swapping
    printf("Before Swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    swap(&a, &b);  // Call the 'swap' function and pass the addresses of 'a' and 'b'
    
    // Print the values after swapping
    printf("\nAfter Swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;  // Return 0 to indicate successful execution
}
