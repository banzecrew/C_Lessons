#include <stdio.h>

#define ASCII      255
#define SPACE      32
#define NEW_STRING 10
#define TABULATION 9

int main(int argc, char const *argv[])
{
	         int   c;
	         int   i, j, v, chars_counter;
	unsigned int   symbols[ASCII];

	chars_counter = 0;

	for (i = 0; i <= ASCII; ++i)
		symbols[i] = 0;

	while ((c = getchar()) != EOF) {
		if ((c >= 0 && c <= 255))
			++symbols[c];
	}

	for (i = 0; i <= ASCII; ++i) {
		if (symbols[i] > 0)
			++chars_counter;
	}

	for (i = 0; i <= ASCII; ++i) {
		if (i % 4 == 0)
			putchar('\n');
		printf("symbols[%d] = %d ", i, symbols[i]);
	}

	putchar('\n');

	printf("Vertical histogram\n\n");

	for (i = 0; i <= ASCII; ++i) {
		if (symbols[i] > 0) {

			if (i == SPACE) {
				printf("Space: ");
				for (j = 0; j < symbols[i]; ++j) 
					putchar('*');
				putchar('\n');
			}

			else if (i == NEW_STRING) {
				printf("\\n   : ");
				for (j = 0; j < symbols[i]; ++j)
					putchar('*');
				putchar('\n');
			}

			else if (i == TABULATION) {
				printf("\\t   : ");
				for (j = 0; j < symbols[i]; ++j)
					putchar('*');
				putchar('\n');
			}

			else {
				printf("%c    : ", i);
				for (j = 0; j < symbols[i]; ++j)
					putchar('*');
				putchar('\n');
			}
		}
	}

	putchar('\n');

	printf("Horizontal histogram\n\n");
/*
	for (v = chars_counter; v != 0; --v) {
		printf("%d", v);

		for (i = 0; i <= ASCII; ++i) {

			if (symbols[i] > 0) {

				if (symbols[i] == v) {

					for (j = 0; j <= i; ++j) {

						if (j == i)
							printf("*");
						else
							printf(" ");
					}
				}
			}
		}
		putchar('\n');
	}
*/
/*
	for (i = 0; i <= ASCII; ++i) {
		if (symbols[i] > 0) {

			if (i == SPACE) {
				printf("Space: ");
				for (j = 0; j <= symbols[i]; ++j) {
					if (j == symbols[i])
						printf("*");
					else
						printf(" ");
				}
				putchar('\n');
			}

			else if (i == NEW_STRING) {
				printf("\\n   : ");
				for (j = 0; j <= symbols[i]; ++j) {
					if (j == symbols[i])
						printf("*");
					else
						printf(" ");
				}
				putchar('\n');
			}

			else if (i == TABULATION) {
				printf("\\t   : ");
				for (j = 0; j <= symbols[i]; ++j) {
					if (j == symbols[i])
						printf("*");
					else
						printf(" ");
				}
				putchar('\n');
			}

			else {
				printf("%c    : ", i);
				for (j = 0; j <= symbols[i]; ++j) {
					if (j == symbols[i])
						printf("*");
					else
						printf(" ");
				}
				putchar('\n');
			}
		}
	}

	printf("       ");

	for (i = 1; i <= chars_counter; ++i) {
		printf("%d", i);
	}
*/
	putchar('\n');

	return 0;
}