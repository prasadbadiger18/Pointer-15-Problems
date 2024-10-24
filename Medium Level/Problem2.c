// Passing Pointers to Functions: Write a function that accepts a pointer to an array and calculates the
// sum of its elements.

#include<stdio.h>

// Function to calculate sum of array elements
void calculateSum(int* arr, int n, int* sum) {
    *sum = 0;  // Initialize sum to 0
    for (int i = 0; i < n; i++) {
        *sum += arr[i];  // Update sum via pointer
    }
}

int main() {
    int n, sum;

    // Asking for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array of size n

    // Input the values into the array
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function and pass the array pointer and address of sum
    calculateSum(arr, n, &sum);

    // Print the result
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
