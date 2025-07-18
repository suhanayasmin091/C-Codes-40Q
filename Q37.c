#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student student;
    
    // Taking input for student information
    printf("Enter student name: ");
    scanf("%s", student.name);
    
    printf("Enter roll number: ");
    scanf("%d", &student.rollNo);
    
    printf("Enter marks: ");
    scanf("%f", &student.marks);
    
    // Displaying student information
    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNo);
    printf("Marks: %.2f\n", student.marks);
    
    return 0;
}
