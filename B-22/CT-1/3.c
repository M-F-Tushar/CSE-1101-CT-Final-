3. What Happens When You Run the Given Code?
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
/*
🚨 Problem Analysis:
This code will not compile, and here's why:

❌ Issue #1: Illegal Struct Member Initialization
In C, you cannot initialize struct members directly inside the structure definition (outside of a function) unless the struct is a const or static global instance.

struct site {
    char name[] = "GeeksQuiz";     // ❌ Not allowed
    int no_of_pages = 200;         // ❌ Not allowed
};
Flexible array members like char name[] must not have an initializer.

Member variables inside a struct definition cannot have initial values assigned like this in standard C.

❌ Issue #2: Uninitialized Pointer
In main():

struct site *ptr;
ptr is declared, but not initialized — it's pointing to a garbage memory address.

Accessing ptr->no_of_pages or ptr->name causes undefined behavior or a segmentation fault at runtime — if it even compiles.

Correct way:

#include <stdio.h>
#include <string.h>

struct site {
    char name[20];
    int no_of_pages;
};

int main() {
    struct site s;
    strcpy(s.name, "GeeksQuiz");
    s.no_of_pages = 200;

    printf("%d\n", s.no_of_pages);
    printf("%s\n", s.name);

    return 0;
}

*/
