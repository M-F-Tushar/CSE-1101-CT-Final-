2. Output of the Given Program
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50] = "Programming is a priority for CSE students";
    int count = 0, i;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' && s[i+1] != ' ') {
            count++;
        }
    }
    printf("%d", count + 1);
    return 0;
}
/*
🧠 Goal of the Program:
Count the number of words in the given string:
"Programming is a priority for CSE students"

🔧 Step-by-step Execution:
Step 1: Variable Initialization
char s[50] = "Programming is a priority for CSE students";
int count = 0, i;
s is an array of characters (a string).

count will hold the number of "transitions" from space to non-space (used to identify word boundaries).

i is the loop index.

Step 2: For Loop Begins
for (i = 0; s[i] != '\0'; i++)
The loop runs until it hits the null terminator '\0', which marks the end of the string.

s[i] accesses each character one-by-one.

Step 3: Inside the Loop - Word Boundary Check
if (s[i] == ' ' && s[i+1] != ' ')
    count++;
This condition checks:

s[i] == ' ' → is the current character a space?

s[i+1] != ' ' → is the next character not a space?

If both are true, it indicates a new word is starting after the space.

📜 Let’s walk through the string character-by-character
Initial string:
"Programming is a priority for CSE students"

We'll examine pairs s[i] and s[i+1] in the loop:

i	        s[i]	                s[i+1]	    Condition Met?	    count
0–10	Letters of "Programming"	Not space	No	                  0
11	        ' '	                      'i'	    ✅ (space → letter)	    1
12–13	    'i', 's'                Not space	No	                    1
14	        ' '	                    'a'	        ✅	                    2
15	        'a'	                    ' '	        No	                    2
16	         ' '	                'p'	        ✅	                    3
17–24	"priority"	Not space	No	3
25	' '	'f'	✅	4
26–28	"for"	Not space	No	4
29	' '	'C'	✅	5
30–32	"CSE"	Not space	No	5
33	' '	's'	✅	6
34–41	"students"	Not space	No	6
🧮 Total count = 6
Each match of the condition found a new word start after a space. But we missed the very first word, "Programming", since it doesn't follow a space.

✅ Final Step:
c
Copy
Edit
printf("%d", count + 1);
Adds 1 to count to include the first word.

So, 6 + 1 = 7 → the correct number of words.

🎯 Output:
7
*/
