#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[3];

    // Input data for students
    for (int i = 0; i < 3; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &students[i].rollNo);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &students[i].marks);
        getchar(); // Consume newline character left by scanf
    }

    // Output data for students
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
