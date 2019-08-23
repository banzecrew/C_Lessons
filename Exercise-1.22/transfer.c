#include <stdio.h>

#define SBREAKER 10


void transfer(int sep);

int main(int argc, char const *argv[])
{
    transfer(SBREAKER);

    return 0;
}

void transfer(int sep)
{
    int i, ch;

    for (i = 1; (ch = getchar()) != EOF; ++i) {
        if (i == sep) {
            putchar('\n');
            i = 1;
        }
        putchar(ch);
    }
}

