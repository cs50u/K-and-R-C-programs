#include <stdio.h>

#define MAX_WORD_LENGTH 20 // Maximum length for a word
#define IN 1               // Inside a word
#define OUT 0              // Outside a word

int main()
{
    int c, state, word_length;
    int word_lengths[MAX_WORD_LENGTH + 1]; // Array to count word lengths
    int i, j;

    // Initialize the word_lengths array to 0
    for (i = 0; i <= MAX_WORD_LENGTH; ++i)
        word_lengths[i] = 0;

    state = OUT; // We're initially outside a word
    word_length = 0;

    // Read input one character at a time
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            // If we encounter whitespace, it means the end of a word
            if (state == IN)
            {
                // If we were in a word, record its length
                if (word_length > 0 && word_length <= MAX_WORD_LENGTH)
                    ++word_lengths[word_length];
                word_length = 0; // Reset for the next word
                state = OUT;
            }
        }
        else
        {
            // If we encounter a non-whitespace character, we're inside a word
            state = IN;
            ++word_length;
        }
    }

    // Print the histogram
    printf("\nHistogram of word lengths:\n");
    for (i = 1; i <= MAX_WORD_LENGTH; ++i)
    {
        printf("%2d: ", i); // Print the word length
        for (j = 0; j < word_lengths[i]; ++j)
            printf("*"); // Print '*' for each word of this length
        printf("\n");
    }

    return 0;
}
