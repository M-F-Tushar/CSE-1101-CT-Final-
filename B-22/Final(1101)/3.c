🔹 Q3 a) Briefly explain switch-case with proper example. [5 Marks]
✅ Explanation:
switch is a conditional statement that allows multi-way branching. It matches a variable's value with case labels and executes corresponding code.
It's cleaner than multiple if-else blocks.

✅ Syntax:
switch(expression) {
    case value1:
        // Code
        break;
    case value2:
        // Code
        break;
    default:
        // Code if no match
}
✅ Example:

#include <stdio.h>
int main() {
    int day = 3;
    switch(day) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        default: printf("Invalid day\n");
    }
    return 0;
}
Output:

Tuesday


🔹 Q3 b) Evaluate the Boolean expressions [10 Marks]
i) !(5 + 5 >= 10)
5 + 5 = 10

10 >= 10 → true (1)

!1 → false (0)

✅ Answer: 0

ii) 5 + 5 == 10 || 1 + 3 == 5
5 + 5 = 10, so 10 == 10 → true (1)

1 + 3 = 4, so 4 == 5 → false (0)

1 || 0 → true (1)

✅ Answer: 1

iii) 5 > 10 || 10 < 20 && 3 < 5
5 > 10 → false (0)

10 < 20 → true (1)

3 < 5 → true (1)

10 < 20 && 3 < 5 → 1 && 1 → 1

So, 0 || 1 → 1

✅ Answer: 1

iv) 10 != 15 && !(10 < 20) || 15 > 30
10 != 15 → true (1)

10 < 20 → true (1) → !1 = 0

So, 1 && 0 = 0

15 > 30 → false (0)

So, final: 0 || 0 = 0

✅ Answer: 0

v) 7 > 10 && 10 < 20 && 3 > 5
7 > 10 → false (0)

Even though the rest are true, with &&, all must be true.

So, 0 && 1 && 0 = 0

✅ Answer: 0

Q3 c) Write a C program to find the factorial of a given integer. [10 Marks]

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        for (i = 1; i <= n; ++i)
            factorial *= i;

        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
Q3 d) Write a C program to compute the grade of a subject. [10 Marks]

#include <stdio.h>

int main() {
    int mark;

    printf("Enter subject mark: ");
    scanf("%d", &mark);

    if (mark >= 80)
        printf("Grade: A+\n");
    else if (mark >= 75)
        printf("Grade: A\n");
    else if (mark >= 70)
        printf("Grade: A-\n");
    else if (mark >= 60)
        printf("Grade: B\n");
    else if (mark >= 50)
        printf("Grade: C\n");
    else if (mark >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}
