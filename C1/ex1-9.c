#include <stdio.h>

/* copy input to output, replacing each string of one or more blanks by a single blank */
int main()
{
    int c;
    int last_was_blank = 0; // flag to track if the last character was a blank

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            if (!last_was_blank)
            {
                putchar(c);         // print the first blank in a sequence
                last_was_blank = 1; // set flag to indicate we're in a blank sequence
            }
        }
        else
        {
            putchar(c);         // print non-blank characters
            last_was_blank = 0; // reset the flag when a non-blank is found
        }
    }
}