🔹 Q1 a) Distinguish between compiler and interpreter [9 Marks]
Feature	            Compiler	                                Interpreter
Execution Speed	    Faster, compiles whole code at once	        Slower, runs code line by line
Error Detection	    Shows all errors after compilation	        Stops at the first error
Output	            Creates an executable file	                No executable, directly runs
Usage Example	    C, C++	                                    Python, JavaScript



🔹 Q1 b) Identify invalid variable names and explain why [12 Marks]
Student#ID – ❌ Invalid: # is not allowed in variable names.

first.name – ❌ Invalid: . is used for structure member access.

2num_2 – ❌ Invalid: Cannot start with a digit.

Computer science – ❌ Invalid: Cannot contain space.

Doubles – ✅ Valid (but shouldn’t be a keyword; here it's fine).

Char_name – ✅ Valid.




🔹 Q1 c) Show the output of the following program [14 Marks]

#include <stdio.h>
int main() {
    int i = -1, j = -1, k = 2, l = 5, m;
    m = ++i && ++j || k++ && l++;
    printf("%d %d %d %d %d %d", i, j, k, l, m);
    return 0;
}
➤ Step-by-step:
++i → 0, ++j → 0

So ++i && ++j → 0 (false)

Now check k++ && l++ → 2 && 5 → 1 (true), k becomes 3, l becomes 6

So m = 0 || 1 → 1

Final values: i=0, j=0, k=3, l=6, m=1

✅ Output:
0 0 3 6 1
