3. Output of the Given Program
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "Taskin", str2[20] = " so so";
    printf("%s\n", strcpy(str2, strcat(str1, str2)));
    return 0;
}
/*
🧠 Key Functions Involved:
strcat(str1, str2)
→ Appends str2 to the end of str1.

strcpy(str2, result)
→ Copies result into str2.

printf("%s\n", ...)
→ Prints the final string stored in str2.

🔧 Step-by-Step Execution
Initial state:
str1 = "Taskin" → size 20

str2 = " so so" → size 20

📍Step 1: strcat(str1, str2)
Appends " so so" to "Taskin"

Result:
str1 = "Taskin so so"

📍Step 2: strcpy(str2, strcat(str1, str2))
We already computed strcat(str1, str2) → "Taskin so so"

Now, copy that result to str2

So str2 = "Taskin so so"

📍Step 3: printf("%s\n", str2)
Prints: Taskin so so

🔚 Final Output:
Taskin so so
*/
