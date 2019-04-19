#include <stdio.h>

#define MAXLEN 15

int getline(int line[], int lim);
void reverse(int line[], int len);


int main(int argc, char const *argv[])
{
	int c;
	int str[MAXLEN];

	printf("Enter string or press Ctrl+C\n");

	while ((c = getline(str, MAXLEN))) {
		printf("Original string: %ls\n", str);
		reverse(str, c);
		printf("Reversed string: %ls\n", str);
	}
	
	return 0;
}

int getline(int line[], int lim)
{
	int c, i;

	for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
			line[i] = c;

	line[i] = '\0';

	return i - 1;
}

void reverse(int line[], int len)
{
	int begin;

	for (begin = 0; begin < len; ++begin) {
		line[begin] = line[begin] + line[len];
		line[len]   = line[begin] - line[len];
		line[begin] = line[begin] - line[len];
		--len;
	}
	
}