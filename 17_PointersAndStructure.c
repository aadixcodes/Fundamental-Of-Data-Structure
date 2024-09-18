#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    struct Employee *ptr = &emp; // Pointer to the structure

    // Input data using pointer
    printf("Enter employee name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);
    printf("Enter employee ID: ");
    scanf("%d", &ptr->id);
    printf("Enter employee salary: ");
    scanf("%f", &ptr->salary);

    // Output data using pointer
    printf("\nEmployee Details:\n");
    printf("Name: %s", ptr->name);
    printf("ID: %d\n", ptr->id);
    printf("Salary: %.2f\n", ptr->salary);

    return 0;
}
