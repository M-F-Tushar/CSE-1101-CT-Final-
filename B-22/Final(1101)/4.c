🔹 a) Explain the following code segments with suitable input and output [10 Marks]
i.
c
Copy
Edit
scanf("%[A-Za-z]", str);
printf("%s\n", str);
✅ Explanation:

%[A-Za-z] reads a sequence of only alphabets until a non-alphabet character (like space or digit) is found.

Stops reading when it encounters a character outside A–Z or a–z.

Input:

nginx
Copy
Edit
Hello123
Output:

nginx
Copy
Edit
Hello
ii.
c
Copy
Edit
scanf("%[^\n]s", str);
printf("%s\n", str);
✅ Explanation:

%[^\n] reads input until a newline is encountered (i.e., reads entire line including spaces).

Common for reading full sentences.

Input:

csharp
Copy
Edit
This is ChatGPT!
Output:

csharp
Copy
Edit
This is ChatGPT!
🔹 b) Show the output of the following programs [10 Marks]
i.
c
Copy
Edit
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
