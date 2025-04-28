✅ Question 6
(a) What will be the output and why?

#include <stdio.h>

union Job {
    float salary;
    int workerNo;
} j;

int main() {
    j.salary = 12.3;
    j.workerNo = 100;

    printf("Salary = %.1f\n", j.salary);
    printf("Number of workers = %d\n", j.workerNo);
}
✅ Output:
Salary = 0.0
Number of workers = 100

🔸 Explanation:
Problem / Important Behavior:
A union shares the same memory location for all its members.
So only one member's value is valid at a time.
When you assign j.workerNo = 100;, it overwrites the previous value of j.salary.
Thus:
When you print j.salary, you are reading invalid (overwritten) data.
When you print j.workerNo, you get 100 correctly.



(b) Find and fix the errors
i. Code Segment – Book struct

struct Book {
    char name[] = "The Book"; // ❌ invalid initialization in struct
    char author[] = "Author"; // ❌ same issue
    int no_of_pages = 500;    // ❌ invalid in struct
};
✅ Fixed Version:

#include <stdio.h>
#include <string.h>

struct Book {
    char name[50];
    char author[50];
    int no_of_pages;
};

int main() {
    struct Book *ptr, b1 = {"The Complete Reference", "Herbert Schildt", 500};
    ptr = &b1;

    printf("%s\n", ptr->name);
    printf("%s\n", ptr->author);
    printf("%d\n", ptr->no_of_pages);

    return 0;
}
ii. Code Segment – Employee struct

struct Person {
    int ID;
    char Name[50];
};

struct Employee {
    struct Person p;
    double Salary;
};

int main() {
    struct Employee e = {25, "ABU HASAN", 250000.00};
    printf("%d %s %.1lf", e.p.ID, e.p.Name, e.Salary);
}
✅ Output:

25 ABU HASAN 250000.0
(c) Scientist Structure Copy
🔹 Requirements:
Create structure for scientist with name, age, publications.

Copy values from one struct to another and print.

✅ Code:

#include <stdio.h>
#include <string.h>

struct Scientist {
    char name[16];
    float age;
    int publications;
};

int main() {
    struct Scientist snst1 = {"Dr. Mamun", 55.5, 45};
    struct Scientist snst2;

    // Copy the values
    snst2 = snst1;

    // Output
    printf("Name: %s\n", snst2.name);
    printf("Age: %.1f\n", snst2.age);
    printf("Publication: %d\n", snst2.publications);

    return 0;
}
✅ Output:

Name: Dr. Mamun
Age: 55.5
Publication: 45
