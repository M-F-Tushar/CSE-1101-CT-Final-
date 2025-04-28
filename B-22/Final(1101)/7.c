✅ Question 7
(a) Output of the recursive function
🔹 Code:

#include <stdio.h>

int fun(int val) {
    if (val == 0)
        return 1;
    return 2 * fun(val - 1);
}

int main() {
    int num = 5;
    int res = fun(num);
    printf("Result = %d\n", res);
    return 0;
}
🔸 Breakdown:
Let’s calculate:
fun(5) = 2 * fun(4)
       = 2 * 2 * fun(3)
       = 2 * 2 * 2 * fun(2)
       = 2 * 2 * 2 * 2 * fun(1)
       = 2 * 2 * 2 * 2 * 2 * fun(0)
       = 2^5 * 1 = 32
✅ Output:

Result = 32
(b) Final value of j and explanation
🔹 Code:

#include <stdio.h>

int increment(int i) {
    static int count = 0;
    count = count + i;
    return count;
}

int main() {
    int i, j;
    for (i = 0; i <= 4; i++)
        j = increment(i);
}
🔸 Execution:
Let's trace the loop:

i	count = count + i	return value (j)
0	0 + 0 = 0	0
1	0 + 1 = 1	1
2	1 + 2 = 3	3
3	3 + 3 = 6	6
4	6 + 4 = 10	10
✅ Final value of j:

j = 10
Because the last return value from increment(i) is 10.

(c) Count number of "ok" in a string
🔹 Task:
Count the number of times "ok" appears as a substring in a lowercase sentence.

🔹 Sample Input:

i am ok are you ok is all ok okay
✅ Output:

4
Matches:

"ok"

"ok"

"ok"

"okay" (contains "ok")

🔹 Code in C:

#include <stdio.h>
#include <string.h>

int countOK(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'o' && str[i + 1] == 'k')
            count++;
    }
    return count;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); // to read full line with spaces
    int result = countOK(str);
    printf("%d\n", result);
    return 0;
}
