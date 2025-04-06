/*
3. Create a C structure **Employee** for 10 employees, storing:
   - Name (up to 20 characters)
   - Salary (float)
   - Hours of Work Per Day (integer)

   Salary increases:
   - ≤ 8 hours → 30% increase  
   - 10 hours → 50% increase  
   - ≥ 12 hours → 100% increase  

   **Input Format**  
   - Read employee details from **input.txt** (name, salary, hours per day).  
   - Compute final salary and store it in **output.txt**.

   **Sample Input | Sample Output**  
   **Dennis Ritchie 60000.00 10** → **Dennis Ritchie 90000**  
   **Rashid Khan 90000.00 14** → **Rashid Khan 180000**  

Employee Salary Calculation Based on Work Hours
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
*/
#include <stdio.h>

typedef struct {
    char name[20];  // Employee name
    float salary;   // Employee salary
    int hours;      // Hours worked per day
} Employee;

int main() {
    FILE *input = fopen("input.txt", "r");  // Open the input file
    FILE *output = fopen("output.txt", "w"); // Open the output file

    Employee emp;  // Declare an employee variable

    // Read the employee details from the input file
    while (fscanf(input, "%s %f %d", emp.name, &emp.salary, &emp.hours) != EOF) {
        // Adjust salary based on the hours worked
        if (emp.hours <= 8) {
            emp.salary *= 1.3;  // 30% increase
        } else if (emp.hours == 10) {
            emp.salary *= 1.5;  // 50% increase
        } else if (emp.hours >= 12) {
            emp.salary *= 2.0;  // 100% increase
        }

        // Write the name and updated salary to the output file
        fprintf(output, "%s %.2f\n", emp.name, emp.salary);
    }

    fclose(input);  // Close the input file
    fclose(output);  // Close the output file

    printf("Salaries updated and saved to output.txt\n");
    return 0;
}
