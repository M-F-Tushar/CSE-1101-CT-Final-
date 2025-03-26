4. Errors in the Given Code
c
Copy
Edit
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
Errors & Fixes
Structure founder is used before definition

struct founder must be defined before using it in struct zoho.

Wrong Initialization Order

"sridhar" should be assigned to zs.p.ceo, not directly in zs.

Corrected Code
c
Copy
Edit
#include <stdio.h>
#include <string.h>

// Define founder before using it in zoho
struct founder {
    char ceo[10];
};

// Define zoho structure
struct zoho {
    int employees;
    char comp[5];
    struct founder p;
};

int main() {
    struct zoho zs = {4000, "zoho", {"sridhar"}};  // Corrected initialization

    printf("%s %d %s\n", zs.comp, zs.employees, zs.p.ceo);
    return 0;
}
Output
yaml
Copy
Edit
zoho 4000 sridhar
