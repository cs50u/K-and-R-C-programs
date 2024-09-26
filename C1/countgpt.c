#include <stdio.h>

int main() {
    int c;
    long nc = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            printf("Newline detected.\n");
        } else if (c == ' ') {
            printf("Space detected.\n");
        } else if (c == EOF) {
            printf("EOF detected.\n");
        } else {
            printf("Character detected: %c\n", c);
        }
        ++nc;
    }
    printf("Total character count: %ld\n", nc);
}
