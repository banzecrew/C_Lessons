#include <stdio.h>

#define MAXLEN 15

int getline(int line[], int lim);
void reverse(int line[]);


int main(int argc, char const *argv[])
{
	int c;
	int str[MAXLEN];

	printf("Enter string or press Ctrl+C\n");

	while ((c = getline(str, MAXLEN))) {
		printf("Original  string: %ls\n", str);
		reverse(str);
		printf("Processed string: %ls\n", str);
	}
	
	return 0;
}

int getline(int line[], int lim)
{
	int c, i;

	for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
			line[i] = c;

	line[i++] = '\0';

	return i;
}

void reverse(int line[])
{
	int begin;
	int mid, end;

	end = 0;

	while (line[end] != '\0')
		++end;

	--end;

	mid = (end + 1) / 2;

	if (end >= 1) {
		for (begin = 0; begin < mid; ++begin) {
			line[begin] = line[begin] + line[end];
			line[end]   = line[begin] - line[end];
			line[begin] = line[begin] - line[end];
			--end;
		}
	}
}