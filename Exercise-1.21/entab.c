#include <stdio.h>

#define MAX_LEN 100
#define SPACE 32
#define TAB_STOP 8



int getline(char s[], int lim);
void entab(char s[], int stop);

int main(int argc, char const *argv[])
{
    char line[MAX_LEN];

    while (getline(line, MAX_LEN))
        entab(line, TAB_STOP);

    return 0;
}

int getline(char s[], int lim)
{
    int i, c;

    for (i = 0; i < lim; ++i)
        s[i] = 0;

    for (i = 0; i < (lim -1) && (c = getchar() != '\n'); ++i)
        s[i] = c;
    
    s[i] = '\0';

    return i;
}

void entab(char s[], int stop)
{
    
}