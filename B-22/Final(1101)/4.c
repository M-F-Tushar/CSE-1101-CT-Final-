🔹 a) Explain the following code segments with suitable input and output [10 Marks]
i.
scanf("%[A-Z]s", str);
printf("%s\n", str);
📜 Explanation:
%[A-Z] — Scan only uppercase letters from A to Z.

It keeps reading characters as long as they are capital letters.

Stops reading if a non-uppercase character is entered (like a space, lowercase letter, number, etc.).

⚡ Notice: The extra s after ] is not actually needed.
Correct format would be: scanf("%[A-Z]", str);
(but in C, %[A-Z]s may still work on some compilers, ignoring s.)

📥 Suitable Input Example:
ABCDEF
(or)
HELLOworld
(Here, it stops after HELLO because w is not uppercase.)

📤 Output Example:
For input:
HELLOworld
Output will be:
HELLO
✅ Only the capital letters are stored and printed.

ii.
scanf("%[^\n]s", str);
printf("%s\n", str);
📜 Explanation:
%[^\n] — Scan everything except newline (\n).

It keeps reading any character until Enter key (newline) is pressed.

^ inside [] means "NOT".

⚡ Again, the extra s is unnecessary. Better is: scanf("%[^\n]", str);

📥 Suitable Input Example:
Hello World! Welcome to C programming.
(You type this and then press Enter.)

📤 Output Example:
Hello World! Welcome to C programming.
✅ It stores and prints the entire line you entered — spaces, punctuation, everything — until you press Enter.

🔥 Quick Table:
Code	Meaning	Example Input	Example Output
%[A-Z]	Read only uppercase letters	HELLOworld	HELLO
%[^\n]	Read everything except Enter	Good Morning!	Good Morning!
🎯 Important Points:
%[A-Z] is like a filter for only A-Z characters.

%[^\n] is like a full line reader (up to Enter).

Be careful: If you input wrong types (like lowercase in first case), it will stop reading immediately.
🔹 b) Show the output of the following programs [10 Marks]
i.
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        if ((char)a[i] == '5')
            printf("%d\n", a[i]);
        else
            printf("FAIL\n");
    }
    return 0;
}
✅ Explanation:
char value of a[i] is being compared with '5' (ASCII 53).

Only a[i] == 5 matches '5'.

Output:

nginx
Copy
Edit
FAIL
FAIL
FAIL
FAIL
5
ii.
c
Copy
Edit
int main() {
    float x = 3.14;
    double y = 3.14;

    if (x == y)
        printf("Equal");
    else
        printf("Not Equal");
}
✅ Explanation:

float and double have different precision.

Comparison may result in Not Equal, especially on strict compilers.

Most Likely Output:
Not Equal


🔹 c) Show the errors and rewrite the corrected code [15 Marks]
(i)Original Code:

int main() {
    int a, b;
    Scanf(" %d %lf", a, b);
    if (a > b)
        printf("");
    else
        printf("You have to play it");
}
❌ Errors:
Scanf → should be scanf (C is case-sensitive)

"%d %lf" format is for int and double, but variables are int. Change to "%d %d".

Missing & before variables in scanf.

printf("") – does nothing. Should print something meaningful.

Missing return 0;.

✅ Corrected Code:

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("A is greater\n");
    else
        printf("You have to play it\n");

    return 0;
}

(ii)✅ Original Code:

int main() {
    int i = 5, j = 5;
    if(i >= j);
        printf("G");
    else if
        printf("L");
    else
        printf("E");
}
❌ Errors Identified:
Semicolon (;) after if(i >= j):
This ends the if prematurely, making the following printf("G") always execute regardless of the condition.

else if missing condition:
else if must be followed by a condition in parentheses.

✅ Corrected Code:
c
Copy
Edit
#include <stdio.h>

int main() {
    int i = 5, j = 5;

    if(i >= j)
        printf("G");
    else if(i < j)
        printf("L");
    else
        printf("E");

    return 0;
}
✅ Explanation:
Since i = 5 and j = 5, the condition i >= j is true.

Output:
G
