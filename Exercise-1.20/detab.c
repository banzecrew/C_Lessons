#include <stdio.h>

#define MAXLEN   1000
#define TAB_STOP 8

int getline(char line[], int lim);
void detab(char line[], int stops);

int main(int argc, char const *argv[])
{
		
	char line[MAXLEN];
		
	while (getline(line, MAXLEN))
		detab(line, TAB_STOP);

	return 0;
}

int getline(char line[], int lim)
{
	int i, c;
	
	for (i = 0; i < lim; ++i)
		line[i] = '0';

	for (i = 0; i < (lim - 1) && (c = getchar()) != '\n'; ++i)
		line[i] = c;

	line[i] = '\0';

	return i;
}

void detab(char line[], int stops)
{
	int i, j;
	int blanks;

	blanks = 0;

	for (i = 0, j = 0; line[i] != '\0'; ++i, ++j) {
		if (line[i] == '\t') {
			blanks = stops - (j % stops);
			while (blanks > 0) {
				putchar(' ');
				--blanks;
			} j = -1;
		}
		else {
			printf("%c", line[i]);
		}
	}
	putchar('\n');
}