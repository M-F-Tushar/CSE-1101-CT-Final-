
✅ Problem 3: What will happen when you run the code?
➤ Given Code:
c
Copy
Edit
#include<stdio.h>
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
✅ Step-by-Step Explanation:
Struct Declaration Issue:

You cannot initialize structure members (char name[] = "...") inside the structure definition.

This is only allowed when creating an instance of the structure — not while defining it.

Pointer Issue:

struct site *ptr; is declared, but it is not pointing to any valid memory.

Accessing ptr->no_of_pages or ptr->name leads to undefined behavior or segmentation fault.

❌ What happens when you run this code?
Compilation fails due to the invalid structure definition.

Even if it compiled, it would cause a runtime error (segmentation fault) due to an uninitialized pointer.

✅ Corrected Version of the Code:
c
Copy
Edit
#include <stdio.h>
#include <string.h>

struct site {
    char name[20];
    int no_of_pages;
};

int main() {
    struct site s = {"GeeksQuiz", 200};
    struct site *ptr = &s;

    printf("%d ", ptr->no_of_pages);
    printf("%s", ptr->name);

    return 0;
}
✅ Output:
Copy
Edit
200 GeeksQuiz
