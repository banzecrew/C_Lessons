#include <stdio.h>

#define MAXLINE 10

int getline(char line[], int lim);
void copy(char to[], char from[]);


int main(int argc, char const *argv[])
{
	int  len;
	int  max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
		printf("The longest line\n%s\n", longest);

	return 0;
}

int getline(char s[], int lim)
{
	int c, i, tmp;

	for (i = 0, tmp = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < (lim - 1)) {
			if (c == '\n') {
				s[tmp++] = c;
				++i;
			}
			s[tmp++] = c;
		}
	}
	s[tmp] = '\0';

	printf("Length of current string: %d\n", i);

	return i;
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}