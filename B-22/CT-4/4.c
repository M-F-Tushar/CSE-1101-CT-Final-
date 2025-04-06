✅ Problem 4: Find the Errors and Rewrite the Code
➤ Given Code:
#include<stdio.h>
struct zoho {
    int employees;
    char comp[5];
    struct founder p;
};

struct founder {
    char ceo[10];
};

int main() {
    struct zoho zs = {4000, "zoho", "sridhar"};
    printf("%s %d %s", zs.comp, zs.employees, zs.p.ceo);
    return 0;
}
❌ What’s Wrong?
Structure Dependency Order:

You cannot declare struct founder p; in struct zoho before struct founder is defined.

It results in a compiler error: "unknown type founder".

Initialization Issue:

When initializing struct zoho zs, you're trying to pass "sridhar" directly — this works only if nested structures are initialized in order.

But we need to break it into parts and assign values correctly.

✅ Step-by-Step Fix:
Define struct founder BEFORE struct zoho.

Initialize struct founder separately, then assign it to zoho.

Ensure correct string size for comp.

✅ Corrected Code:
c
Copy
Edit
#include <stdio.h>
#include <string.h>

// First define the founder structure
struct founder {
    char ceo[10];
};

// Now define the main structure
struct zoho {
    int employees;
    char comp[10];
    struct founder p;
};

int main() {
    struct zoho zs;

    // Assign values
    zs.employees = 4000;
    strcpy(zs.comp, "zoho");
    strcpy(zs.p.ceo, "sridhar");

    // Print output
    printf("%s %d %s", zs.comp, zs.employees, zs.p.ceo);

    return 0;
}
✅ Output:
zoho 4000 sridhar
