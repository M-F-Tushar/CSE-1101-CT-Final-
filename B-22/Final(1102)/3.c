3. Employee Salary Calculation Based on Work Hours
Explanation:
An employee's salary is adjusted based on hours worked:

≤8 hours → 30% increase.

10 hours → 50% increase.

≥12 hours → 100% increase.

Steps:
Define a struct Employee with:

Name

Salary

Hours worked

Read input from a file (input.txt).

Apply salary increments based on hours worked.

Store the final salary in output.txt.

C Code:
c
Copy
Edit
#include <stdio.h>

typedef struct {
    char name[20];
    float salary;
    int hours;
} Employee;

void calculateSalary(Employee *e) {
    if (e->hours <= 8) {
        e->salary *= 1.3;  // Increase by 30%
    } else if (e->hours == 10) {
        e->salary *= 1.5;  // Increase by 50%
    } else if (e->hours >= 12) {
        e->salary *= 2.0;  // Increase by 100%
    }
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    Employee emp;

    while (fscanf(input, "%s %f %d", emp.name, &emp.salary, &emp.hours) != EOF) {
        calculateSalary(&emp);
        fprintf(output, "%s %.2f\n", emp.name, emp.salary);
    }

    fclose(input);
    fclose(output);

    printf("Final salaries written to output.txt\n");
    return 0;
}
