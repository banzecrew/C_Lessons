#include <stdio.h>

/*
	test test	test
	test		test

*/

#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
	int c, state, nc, nw, nl;

	state = OUT;
	c = nc = nw = nl = 0;

	while ((c = getchar()) != EOF) {
			++nc;
		if (c == '\n')
			++nl;
		if (c == '\n' || c == '\t' || c == ' ')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}

	printf("Number of word's: %d\n", nw);
	printf("Number of char's: %d\n", nc);
	printf("Number of line's: %d\n", nl);

	return 0;
}