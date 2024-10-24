//Pointer Arrays: Implement a program where an array of strings is stored and printed using an array of pointers.

#include <stdio.h>

int main() {
    // Array of strings using an array of pointers
    char *strings[] = {
        "PRASAD",
        "HELLO",
        "WORLD",
        "PROGRAMMING",
        "C LANGUAGE"
    };

    int numStrings = sizeof(strings) / sizeof(strings[0]);  // Calculate the number of strings

    // Loop to print each string
    for (int i = 0; i < numStrings; i++) {
        printf("%s\n", strings[i]);  // %s is used to print strings
    }

    return 0;
}

//Expalination how string is dereferenced 

/*
Implicit Dereferencing in Strings:
When dealing with strings (character arrays), C provides special handling for array names and pointers, which often eliminates the need for an explicit dereference operator (*). Let's break it down:

1. Array Names Are Pointers:
In C, the name of an array (like strings[0]) is actually a pointer to the first element of the array. For example, consider this string:

c
Copy code
char *str = "HELLO";
Here, str is a pointer to the first character of the string "HELLO". This is essentially the same as saying:

c
Copy code
char *str = &("HELLO"[0]);
So, if you pass str to printf with %s, it will automatically treat str as a pointer to the first character and print the string starting from that memory location.

2. Array of Strings (Array of Pointers):
Now, in the case of an array of strings (like in your code):

c
Copy code
char *strings[] = { "PRASAD", "HELLO", "WORLD" };
strings[0] is a pointer to "PRASAD".
strings[1] is a pointer to "HELLO".
strings[2] is a pointer to "WORLD".
Since strings[i] is already a pointer to a string (or a pointer to the first character of the string), you don't need to explicitly dereference it using the * operator. When you pass strings[i] to printf with %s, C implicitly dereferences it, treating it as a pointer to the first character of the string.

3. The Role of %s in printf:
When you use %s in printf, it expects a pointer to the first character of a null-terminated string. So when you write:

c
Copy code
printf("%s\n", strings[i]);
You are passing strings[i], which is already a pointer to the first character of the string. There is no need to explicitly dereference with *, because printf understands that strings[i] is a pointer to a string and automatically dereferences it to print the characters starting from that pointer location.

4. What Happens Internally:
Let’s take an example:

c
Copy code
char *strings[] = { "PRASAD", "HELLO", "WORLD" };
When you do:

c
Copy code
printf("%s\n", strings[0]);
Internally:

strings[0] is a pointer to the first character of the string "PRASAD".
%s tells printf to start at strings[0] (which is P), and print characters sequentially until it hits the null terminator (\0).
So:

strings[0] points to the memory location where "PRASAD" is stored.
printf("%s\n", strings[0]); starts at that memory location and prints "PRASAD".
Explicit Dereferencing (Not Needed Here):
If you explicitly wanted to dereference strings[0], you would use *strings[0] or *(strings[0]), but that would only give you the first character of the string ('P' in the case of "PRASAD"). That's why it's not needed here, because %s in printf is already designed to handle pointers to strings, and it knows to print the entire string starting from the first character.

Summary:
Array of strings: strings[i] is already a pointer to the first character of a string.
No explicit dereference needed: Passing strings[i] to printf("%s") works because %s expects a pointer to a string and automatically dereferences it to print the characters.
%s: This specifier in printf expects a char* (pointer to a string) and prints the string starting from the address pointed to by the pointer until it finds a null character (\0).
*/