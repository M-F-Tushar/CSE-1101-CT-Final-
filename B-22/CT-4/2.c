✅ Problem 2: Structure for Scientist Information
➤ Problem Description:
Create a C structure Scientist to hold:

Name of the Scientist (max 10 characters)

Age (float value, e.g., 78.5)

Number of Publications (integer)

Then declare two variables: sntst1 and sntst2, assign values to them, and print the data.

✅ Sample Output:
pgsql
Copy
Edit
Name: Dr. Mamun
Age: 55.5
Publication: 45
✅ Step-by-Step Plan:
Define a structure named Scientist with:

name as a character array (char name[11] to fit 10 chars + null terminator)

age as a float

publications as an int

Declare two variables of this structure.

Assign values to their members manually (no input required).

Print the values using printf.

✅ Code:
c
Copy
Edit
#include <stdio.h>

// Define structure
struct Scientist {
    char name[11];     // 10 chars + '\0'
    float age;
    int publications;
};

int main() {
    struct Scientist sntst1, sntst2;

    // Assign values to sntst1
    strcpy(sntst1.name, "Dr. Mamun");
    sntst1.age = 55.5;
    sntst1.publications = 45;

    // Assign values to sntst2 (optional example)
    strcpy(sntst2.name, "Dr. Laila");
    sntst2.age = 47.8;
    sntst2.publications = 30;

    // Print values of sntst1
    printf("Name: %s\n", sntst1.name);
    printf("Age: %.1f\n", sntst1.age);
    printf("Publication: %d\n", sntst1.publications);

    return 0;
}
📌 Note: We use strcpy() to assign strings to character arrays. So, add:

c
Copy
Edit
#include <string.h>
at the top.
