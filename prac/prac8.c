//Create a structure called employee with members Name, Age, Salary. Sort the array of such 
// employee records:
// a. In alphabetical order of their names.
// b. In order of their seniority (age).

#include <stdio.h>
#include <string.h>

// Define the employee structure
typedef struct {
    char Name[50];
    int Age;
    float Salary;
} employee;

// Function to sort employees by name
void sortByName(employee employees[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(employees[i].Name, employees[j].Name) > 0) {
                // Swap employees
                employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

// Function to sort employees by age
void sortByAge(employee employees[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (employees[i].Age < employees[j].Age) {
                // Swap employees
                employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
}

// Function to print employees
void printEmployees(employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Age: %d, Salary: %.2f\n", employees[i].Name, employees[i].Age, employees[i].Salary);
    }
}

int main() {
    // Initialize employees array
    employee employees[] = {
        {"John", 30, 5000.0},
        {"Alice", 25, 6000.0},
        {"Bob", 40, 7000.0},
        {"Charlie", 35, 5500.0}
    };
    int n = sizeof(employees) / sizeof(employees[0]);

    printf("Original Employees:\n");
    printEmployees(employees, n);

    printf("\nEmployees sorted by Name:\n");
    sortByName(employees, n);
    printEmployees(employees, n);

    printf("\nEmployees sorted by Age:\n");
    sortByAge(employees, n);
    printEmployees(employees, n);

    return 0;
}