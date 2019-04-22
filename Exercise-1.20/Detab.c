#include <stdio.h>

#define MAXLEN 15
#define TAB_SIZE 3

int getline(char line[], int lim);
void detab(char line[], int stops);

int main(int argc, char const *argv[])
{
	char str[MAXLEN];

	while (getline(str, MAXLEN))
		detab(str, TAB_SIZE);

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

	for (i = 0; line[i] != '\0'; ++i) {
		if (line[i] == '\t') {
			for (j = 0; j < stops; ++j)
				putchar(' ');
		} else {
			printf("%c", line[i]);
		}
	}
	putchar('\n');
}