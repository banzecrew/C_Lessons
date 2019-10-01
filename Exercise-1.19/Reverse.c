#include <stdio.h>

#define MAXLEN 15

int getline(char line[], int lim);
void reverse(char line[]);
int getlen(char line[]);


int main(int argc, char const *argv[])
{
	char c;
	char str[MAXLEN];


	printf("Enter string or press Ctrl+C\n");

	while ((c = getline(str, MAXLEN))) {
		printf("Original string: %s\n", str);
		reverse(str);
		printf("Reversed string: %s\n", str);
	}

	return 0;
}

int getline(char line[], int lim)
{
	int i;
	char c;

	for (i = 0; i <= lim; ++i)
		line[i] = 0;

	for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
			line[i] = c;

	line[i] = '\0';

	return i;
}

void reverse(char line[])
{
	int begin, len;

	len = getlen(line);

	for (begin = 0; begin < (len - begin); ++begin) {
		line[begin      ] = line[begin] + line[len - begin];
		line[len - begin] = line[begin] - line[len - begin];
		line[begin      ] = line[begin] - line[len - begin];
	}
}

int getlen(char line[])
{
	int i;

	for (i = 0; line[i] != '\0'; ++i);
	

	return i - 1;
}