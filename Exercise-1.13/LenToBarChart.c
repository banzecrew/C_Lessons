#include <stdio.h>

#define IN_WORD  1
#define OUT_WORD 0
#define CAPACITY 50

int main(int argc, char const *argv[])
{
	int c, i, state;
	int words[CAPACITY];

	state = OUT_WORD;

	for (i = 0; i <= CAPACITY; ++i)
		words[i] = 0;

	i = 0;

	while ((c = getchar()) != EOF && i <= CAPACITY) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN_WORD) {
				state = OUT_WORD;
				++i;
			}
		}
		else {
			words[i] = c;
			++i;
		}
	}
/*
	for (i = 0; i <= CAPACITY; ++i)
		printf("Words[%d]: %7c\n", i, words[i]);
*/
	return 0;
}