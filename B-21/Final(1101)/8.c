8. a) What is the purpose of '\0' character in C?
Answer:

In C, the '\0' character is called the null character, and it is used to mark the end of a string.

When you declare a string in C like this:
char str[] = "Hello";
It is actually stored as:
H   e   l   l   o   \0
So, the null character '\0' tells C functions (like printf, strlen, etc.) where the string ends.

8. b) Structure to store student data and sort by merit
We are to:
Create a structure to store:
Name
Roll number
Marks for 6 subjects
Total marks
Store data for 10 students
Sort and display students according to merit (i.e., total marks in descending order)
Here’s a step-by-step solution in C:

#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks[6];
    int total;
};

// Function to calculate total marks
int calculateTotal(int marks[]) {
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += marks[i];
    }
    return sum;
}

// Function to sort students by total marks (Descending)
void sortByMerit(struct Student students[], int n) {
    struct Student temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (students[i].total < students[j].total) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

int main() {
    struct Student students[10];

    // Input
    for (int i = 0; i < 10; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);

        printf("Enter marks for 6 courses:\n");
        for (int j = 0; j < 6; j++) {
            scanf("%d", &students[i].marks[j]);
        }

        students[i].total = calculateTotal(students[i].marks);
    }

    // Sort by total marks
    sortByMerit(students, 10);

    // Output sorted data
    printf("\nStudents sorted by merit:\n");
    for (int i = 0; i < 10; i++) {
        printf("Name: %s, Roll: %d, Total Marks: %d\n", students[i].name, students[i].roll, students[i].total);
    }

    return 0;
}
8. c) Output of the given C program
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char c[] = "Chandpur";
    char *p = c;
    printf("%c\n", *p);           // 1
    printf("%s\n", p);            // 2
    printf("%c\n", *(p+2));       // 3
    printf("%s\n", (p+2));        // 4
    printf("%s\n", p++ + 3);      // 5
    return 0;
}
Let’s break it down:

char c[] = "Chandpur"; → Array contains 'C', 'h', 'a', 'n', 'd', 'p', 'u', 'r', '\0'

char *p = c; → Pointer p now points to the start of the array ('C')

Line by line:

*p → 'C'

Output: C

p is pointing to "Chandpur"

Output: Chandpur

*(p + 2) → 'a'

Output: a

(p + 2) is the string starting from 'a' → "andpur"

Output: andpur

p++ + 3:

p++ uses the current p (still at 'C') and then increments p to point to 'h'

So, p++ + 3 → p (originally at C) + 3 → pointer to 'n' → string from 'n' onward: "ndpur"

Output: ndpur

Final Output:
C
Chandpur
a
andpur
ndpur
