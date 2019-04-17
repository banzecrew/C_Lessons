#include <stdio.h>

#define MAXLEN 15

int getline(int line[], int lim);
void reverse(int line[]);


int main(int argc, char const *argv[])
{
	int  c;
	int str[MAXLEN];
/*
	while ((c = getline(str, MAXLEN)) > 0) {
		printf("Original string: %ls\n", str);
	}
	*/
	getline(str, MAXLEN);

	for (c = 0; c <= MAXLEN; ++c)
		printf("%d ", str[c]);

	putchar('\n');

	printf("Source string: %ls\n", str);

	putchar('\n');

	reverse(str);

	printf("Processed string: %ls\n", str);

	for (c = 0; c <= MAXLEN; ++c)
		printf("%d ", str[c]);

	putchar('\n');
	

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

	mid = end / 2;

	printf("end: %d mid: %d\n", end, mid);

	if (end >= 1) {
		if (mid % 2 == 0) {
			for (begin = 0; begin <= mid; ++begin) {
				line[begin] = line[begin] + line[end];
				line[end]   = line[begin] - line[end];
				line[begin] = line[begin] - line[end];
				--end;
			}
		} else {
			for (begin = 0; begin < mid; ++begin) {
				line[begin] = line[begin] + line[end];
				line[end]   = line[begin] - line[end];
				line[begin] = line[begin] - line[end];
				--end;
			}
		}
	}
}



















