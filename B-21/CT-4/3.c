3. Output of the Given Recursive Program
#include<stdio.h>

int recursion(int x) {
    static int y = 0;  // Static variable retains value
    if(x <= 0) return 1;
    y = x + y;
    printf("%d\n", y);
    return recursion(x - 2) + recursion(x - 3);
}

int main() {
    int result = recursion(5);
    return 0;
}
/*
🧩 Start: recursion(5)
x = 5, y = 0

y = y + x = 0 + 5 = 5

✅ Print: 5

Calls:

recursion(3)

recursion(2)

➤ Now: recursion(3)
x = 3, y = 5

y = 5 + 3 = 8

✅ Print: 8

Calls:

recursion(1)

recursion(0)

➤ Then: recursion(1)
x = 1, y = 8

y = 8 + 1 = 9

✅ Print: 9

Calls:

recursion(-1)

recursion(-2)

➤ recursion(-1)
x = -1, so x <= 0

❌ Does not print — just returns 1

➤ recursion(-2)
Same as above → ❌ no print — just returns 1

So, at this point, all the deeper calls under recursion(1) are base cases — they don't print anything.

➤ Back to recursion(0) (from recursion(3))
x = 0 → ❌ no print — returns 1

➤ Now: recursion(2) (from very first call recursion(5))
x = 2, y = 9

y = 9 + 2 = 11

✅ Print: 11

Calls:

recursion(0) → ❌ no print — returns 1

recursion(-1) → ❌ no print — returns 1

✅ Final Summary — What got printed?
Only these calls had x > 0, so they printed:

recursion(5) → 5

recursion(3) → 8

recursion(1) → 9

recursion(2) → 11

✅ Final Output:
5
8
9
11
*/
