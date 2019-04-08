#include <stdio.h>

#define LIMIT 100
#define TAB   9
#define SPACE 32


int FillStr(char str[], int lim);
void PrintStr(char str[]);


int main(int argc, char const *argv[])
{
	char str[LIMIT];
	int  c;

	printf("Enter a string or press CtrL+D\n");

	while ((c = FillStr(str, LIMIT))) {
		PrintStr(str);
	}

	return 0;
}

int FillStr(char str[], int lim)
{
	int c, i;

	for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i) {
		str[i] = c;
	}

	str[i] = '\0';

	if (c == '\n')
		++i;

	return i;
}

void PrintStr(char str[])
{
	int state;
	int i;

	i = state = 0;

	while (str[i] != '\0') {
		if (str[i] == TAB || str[i] == SPACE) {
			if (!state) {
				putchar(' ');
				state = 1;
			}
		} else {
			state = 0;
			printf("%c", str[i]);
		}
		++i;
	}
	putchar('\n');
}