2. Output of the Given Program
c
Copy
Edit
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50] = "Programming is a priority for CSE students";
    int count = 0, i;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i+1] != ' ') {
            count++;
        }
    }
    printf("%d", count + 1);
    return 0;
}
Step-by-Step Execution
s = "Programming is a priority for CSE students"

Count the number of spaces followed by a non-space character.

Each such space indicates a word boundary.

The total number of words is count + 1.

Word Count
arduino
Copy
Edit
"Programming"  → 1
"is"           → 2
"a"            → 3
"priority"     → 4
"for"          → 5
"CSE"          → 6
"students"     → 7
Output
Copy
Edit
7
