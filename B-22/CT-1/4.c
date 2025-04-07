4. Errors in the Given Code
#include<stdio.h>
struct zoho {
    int employees;
    char comp[5];
    struct founder p;  // Error: 'struct founder' is not yet defined
};
struct founder {
    char ceo[10];
};

int main() {
    struct zoho zs = {4000, "zoho", "sridhar"};  // Error: Wrong field order
    printf("%s %d %s", zs.comp, zs.employees, zs.p.ceo);
    return 0;
}
/*
🚨 Errors in the Code:
1.Structure Definition Order:

In the struct zoho, you're trying to use a struct founder named p before it is defined. In C, the compiler needs to know about struct founder before it can be used in struct zoho.

Solution: Move the definition of struct founder above struct zoho.

2.Array Size Mismatch:

char comp[5] is too small for the string "zoho", which requires 5 characters plus the null terminator (6 bytes). This will cause a buffer overflow.

Solution: Increase the size of the comp array to at least 6 to fit the string "zoho".

3.Structure Initialization:

When initializing struct zs, you're trying to assign "sridhar" to zs.p.ceo. This is fine, but you should make sure that the ceo array has enough space. ceo[10] is enough to hold the string "sridhar".

✅ Corrected Code:
Here’s the corrected version of your code:

#include <stdio.h>

// Define the founder structure first
struct founder {
    char ceo[10];
};

// Now define the zoho structure which uses founder
struct zoho {
    int employees;
    char comp[6];   // Increase size to 6 to hold "zoho" and null terminator
    struct founder p;
};

int main() {
    // Initialize the struct properly
    struct zoho zs = {4000, "zoho", {"sridhar"}};  // Note: initialize ceo inside braces

    // Print the values
    printf("%s %d %s", zs.comp, zs.employees, zs.p.ceo);

    return 0;
}
🔑 Changes Made:
Moved struct founder above struct zoho.

Increased char comp[5] to char comp[6] to accommodate the string "zoho".

Properly initialized zs.p.ceo using {"sridhar"}.

🧪 Output of the corrected code:
zoho 4000 sridhar
    */
