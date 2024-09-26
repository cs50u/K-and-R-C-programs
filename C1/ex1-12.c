#include <stdio.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

/* prints input one word per line */
int main()
{
    int c, state;

    state = OUT; // Initialize state to OUT

    // Read characters until EOF
    while ((c = getchar()) != EOF)
    {
        // Check if the character is a space, newline, or tab
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;  // Set state to OUT
            printf("\n"); // Print newline to separate words
        }
        // If the state is OUT and a non-whitespace character is found
        else if (state == OUT)
        {
            state = IN; // Set state to IN
            putchar(c); // Print the character
        }
        // If the state is IN, continue printing characters
        else if (state == IN)
        {
            putchar(c); // Print the character
        }
    }
}