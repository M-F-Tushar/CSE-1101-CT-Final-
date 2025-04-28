🔹 Q3 a) Briefly explain switch-case with proper example. [12 Marks]
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


🔹 Q3 b) Write a pseudocode to delete an element at a desired position from an array. [13 Marks]
✅ Pseudocode:
Procedure DeleteElement(array, size, position)
    if position < 0 or position ≥ size:
        Print "Invalid position"
        return

    for i from position to size - 2:
        array[i] = array[i + 1]

    size = size - 1
    return array
✅ Example in C-like logic:

int arr[100], n, pos;
printf("Enter number of elements: ");
scanf("%d", &n);

printf("Enter elements: ");
for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

printf("Enter position to delete: ");
scanf("%d", &pos);

if(pos < 0 || pos >= n) {
    printf("Invalid position\n");
} else {
    for(int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    printf("Array after deletion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}



🔹 Q3 c) Show output of the following program: [10 Marks]

#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("%d\n", i);
        i = i + 2;
        if (i >= 20)
            break;
    } while (1);
    getchar();
    return 0;
}
✅ Output:

1
3
5
7
9
11
13
15
17
19
