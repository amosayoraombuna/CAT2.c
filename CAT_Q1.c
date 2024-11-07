#include <stdio.h>

// Defining employee structure
struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    // Declaring variable of type struct employee
    struct employee emp;

    // Input of employee details
    printf("Enter name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    
    printf("Enter ID: ");
    scanf("%d", &emp.id);
    getchar(); // Clear newline character from buffer

    printf("Enter department: ");
    fgets(emp.department, sizeof(emp.department), stdin);
    
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    getchar(); // Clear newline character from buffer

    printf("Enter email: ");
    fgets(emp.email, sizeof(emp.email), stdin);

    // Display of employee details
    printf("\nEmployee Details:\n");
    printf("Name: %s", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s", emp.email);

    return 0;
}
