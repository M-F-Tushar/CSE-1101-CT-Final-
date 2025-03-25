3. Output of the Given Program
c
Copy
Edit
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20] = "Taskin", str2[20] = " so so";
    printf("%s\n", strcpy(str2, strcat(str1, str2)));
    return 0;
}
Step-by-Step Execution
Initial Values

ini
Copy
Edit
str1 = "Taskin"
str2 = " so so"
strcat(str1, str2)

Concatenates str2 to str1.

str1 becomes "Taskin so so".

strcpy(str2, str1)

Copies "Taskin so so" to str2.

Prints str2

nginx
Copy
Edit
Taskin so so
Output
nginx
Copy
Edit
Taskin so so
