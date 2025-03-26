
3. What Happens When You Run the Given Code?
c
Copy
Edit
#include‹stdio.h›
struct site {
    char name[] = "GeeksQuiz";
    int no_of_pages = 200;
};

int main() {
    struct site *ptr;
    printf("%d ", ptr->no_of_pages);
    printf("%s", ptr->name);
    getchar();
    return 0;
}
Errors & Issues
Incorrect structure member initialization inside definition

In C, structure members cannot be initialized inside the structure definition. Instead, they must be initialized separately.

Uninitialized Pointer (ptr)

ptr is declared but not assigned memory.

Accessing ptr->no_of_pages and ptr->name results in undefined behavior.

Corrected Code
c
Copy
Edit
#include <stdio.h>
#include <string.h>

// Define the structure correctly
struct site {
    char name[20];  // Properly allocate size for the string
    int no_of_pages;
};

int main() {
    struct site s = {"GeeksQuiz", 200};  // Initialize struct properly
    struct site *ptr = &s;               // Assign pointer to struct

    printf("%d ", ptr->no_of_pages);
    printf("%s", ptr->name);

    return 0;
}
Output
Copy
Edit
200 GeeksQuiz
