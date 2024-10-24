//Pointer to Structure: Create a structure for a Student and use a pointer to access and modify its fields.

#include<stdio.h>
struct Student {
    char name[100];
    int RollNo;
    int marks;
};

int main()
{
    // Declare an array of 1 student
    struct Student students[1];

    // Declare a pointer to the array
    struct Student *ptr;

    // Point the pointer to the array of students
    ptr = students;

    // Input for the student
    for(int i = 0; i < 1; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", (ptr + i)->name);

        printf("EnterRoll no of student %d : ", i + 1);
        scanf("%d", &(ptr + i)->RollNo);

        printf("Enter marks of student %d : ", i + 1);
        scanf("%d", &(ptr + i)->marks);
    }

    // Output the name of the student
    for(int i = 0; i < 1; i++) {
        printf("Name of student %d: %s\n", i + 1, (ptr + i)->name);
        printf("Roll no of student %d: %d\n", i + 1, (ptr + i)->RollNo);
        printf("marks of student %d: %d\n", i + 1, (ptr + i)->marks);
    }

    return 0;
}
