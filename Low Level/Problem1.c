//1.Pointer Basics: Write a program to declare an integer, assign a value, and print the value using 
//both the variable and a pointer.


#include<stdio.h>  // Include the standard input-output library

int main() {
    int a = 10;     // Declare an integer variable 'a' and assign it the value 10
    int* ptr = &a;  // Declare a pointer 'ptr' and store the address of 'a' in it

    // Print the value of 'a' directly
    printf("Value stored at a: %d\n", a);
    
    // Print the address of 'a' using the address-of operator (&)
    printf("Address of a: %p\n", &a);   
    
    // Print the address stored in the pointer 'ptr'
    printf("Address stored in ptr: %p\n", ptr); 
    
    // Dereference the pointer 'ptr' to access and print the value of 'a'
    printf("Dereferencing ptr: %d\n", *ptr);

    return 0;  // Return 0 to indicate successful program execution
}
