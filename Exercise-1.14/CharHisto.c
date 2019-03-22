#include <stdio.h>

#define ASCII      255
#define SPACE      32
#define NEW_STRING 10
#define TABULATION 9

int main(int argc, char const *argv[])
{
	int c;
	int i, j;
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
		printf("symbols[%c] = %d ", i, symbols[i]);
	}

	putchar('\n');

	for (i = 0; i < ASCII; ++i) {
		if (symbols[i] > 0) {

			if (i == SPACE) {
				printf("Space: ");
				for (j = 0; j < symbols[i]; ++j) 
					printf("*");
				putchar('\n');
			}

			else if (i == NEW_STRING) {
				printf("\\n   : ");
				for (j = 0; j < symbols[i]; ++j)
					printf("*");
				putchar('\n');
			}

			else if (i == TABULATION) {
				printf("\\t   : ");
				for (j = 0; j < symbols[i]; ++j)
					printf("*");
				putchar('\n');
			}

			else {
				printf("%c    : ", i);
				for (j = 0; j < symbols[i]; ++j)
					printf("*");
				putchar('\n');
			}
		}
	}

	putchar('\n');

	return 0;
}