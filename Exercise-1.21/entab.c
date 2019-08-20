#include <stdio.h>

#define MAX_LEN 100
#define SPACE 32
#define TAB_STOP 8
#define TABINC 8



int getline(char s[], int lim);
void entab(char s[], int stop);

int main(int argc, char const *argv[])
{
/*
    char line[MAX_LEN];

    while (getline(line, MAX_LEN))
        entab(line, TAB_STOP);
*/
	int c, nb, nt, pos;

	nb = nt = 0;

	for (pos = 1; (c = getchar()) != EOF; ++pos)
		if (c == ' ') {
			if (pos % TABINC)
				++nb;
			else {
				nb = 0;
				++nt;
			}
		} else {
			for (; nt > 0; --nt)
				putchar('\t');
			if (c == '\t')
				nb = 0;
			else {
				for (; nb > 0; --nb)
					putchar(' ');
				putchar(c);
				if (c == '\n')
					pos = 0;
				else if (c == '\t')
					pos = pos + (TABINC - (pos - 1) % TABINC) - 1;
		  		}
		  }

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
    int i, j;
    int nb, nt, ch;

    for (i = 0, j = 0; (ch = s[i]) != '\0'; ++i, ++j) {
    	if (ch == SPACE) {
    		if (j % stop != 0)
    			++nb;
    		else {
    			++nt;
    			nb = 0;
    		}
    	}
    	else {
    		for (; nt > 0; --nt)
    			putchar('\t');
    		if (ch == '\t')
    			nb = 0;
    		else 
    			for (; nb > 0; --nb)
    				putchar(' ');
    		printf("%c", ch);
    		if (ch == '\t')
    			j = j + (stop - j % stop);
    	}
    }
}