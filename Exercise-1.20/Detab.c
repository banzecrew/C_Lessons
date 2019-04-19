#include <stdio.h>

#define MAXLEN 15

int getline(char line[], int lim);
void detab(char line[], int stops);

int main(int argc, char const *argv[])
{
	printf("%d\n", 0 % 2);

	return 0;
}

int getline(char line[], int lim)
{
	int i, c;
	
	for (i = 0; i <= lim; ++i)
		line[i] = '0';

	for (i = 0; i < (lim - 1) && (c = getchar()) != '\n'; ++i)
		line[i] = c;

	line[i] = '\0';

	return i;
}

void detab(char line[], int stops)
{
	int i;

	for (i = 0; line[i] != '\0'; ++i) {
		printf("%s\n", line);
	}
}