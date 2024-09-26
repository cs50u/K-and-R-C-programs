#include <stdio.h>

/* count blanks, tabs, and newlines in input */
int main()
{
    int c, nl, blanks, tabs;

    nl = blanks = tabs = 0; // Initialize counts to zero
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl; // Count newlines
        else if (c == ' ')
            ++blanks; // Count blanks (spaces)
        else if (c == '\t')
            ++tabs; // Count horizontal tabs
    }

    printf("Newlines: %d\n", nl);
    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);

    return 0;
}
