1. Distinguish between while and do-while loop.
Answer:
Feature	while Loop	do-while Loop
Execution Condition	The condition is checked before entering the loop body.	The loop body executes at least once, then the condition is checked.
Execution Guarantee	May not execute if the condition is false initially.	Always executes at least once.
Syntax	c while(condition) { // code }	c do { // code } while(condition);
Example:
while loop

c
Copy
Edit
int i = 5;
while (i < 5) {
    printf("%d\n", i);
    i++;
}
Output: (Nothing, because i is not less than 5)

do-while loop

c
Copy
Edit
int i = 5;
do {
    printf("%d\n", i);
    i++;
} while (i < 5);
Output: 5 (Executes once even though condition is false)
