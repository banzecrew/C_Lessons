#include <stdio.h>

#define MAXLEN 15

int getline(char line[], int lim);
void reverse(char line[]);


int main(int argc, char const *argv[])
{
	int  c;
	char str[MAXLEN];
/*
	while ((c = getline(str, MAXLEN)) > 0) {
		printf("Original string: %s\n", str);
		reverse(str);
		printf("Reversed string: %s\n", str);
	}
	*/

	getline(str, MAXLEN);
	printf("%s\n", str);
	reverse(str);
	printf("%s\n", str);


	return 0;
}

int getline(char line[], int lim)
{
	int c, i;

	for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
			line[i] = c;

	line[i++] = '\0';


	return i;
}

void reverse(char line[])
{
	int begin;
	int mid, end;

	end = 0;

	while (line[end] != '\0')
		++end;

	mid = end / 2;

	if (end > 1) {
		if (mid / 2 == 0) {
			for (begin = 0; begin <= mid; ++begin) {
				line[begin] = line[end] + line[end];
				line[end]   = line[begin] / 2;
				line[begin] = line[begin] / 2;
				--end;
			}
		} else {
			for (begin = 0; begin <= mid; ++begin) {
				line[begin] = line[end] + line[end];
				line[end]   = line[begin] / 2;
				line[begin] = line[begin] / 2;
				--end;
			}
		}
	}
}



















