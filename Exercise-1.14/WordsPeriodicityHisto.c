#include <stdio.h>

#define ASCII 255

int main(int argc, char const *argv[])
{
	int c;
	int i;
	int symbols[ASCII];

	for (i = 0; i < ASCII; ++i)
		symbols[i] = 0;

	while ((c = getchar()) != EOF) {
		if ((c >= 0 && c <= 255))
			++symbols[c];
	}

	for (i = 0; i < ASCII; ++i) {
		if (i % 4 == 0)
			putchar('\n');
		printf("symbols[%d] = %d ", i, symbols[i]);
	}

	putchar('\n');


	return 0;
}