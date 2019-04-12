#include <stdio.h>

#define MAXLEN 15

int getline(char str[], int lim);
void reverse();


int main(int argc, char const *argv[])
{
	int   c;
	char  in_str[MAXLEN];
	char out_str[MAXLEN];

	while ((c = getline(in_str, MAXLEN)) > 0) {

	}


	return 0;
}

int getline(char str[], int lim)
{
	int c, i;

	for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
			str[i] = c;

	str[i] = '\0';

	if (c == '\n')
		++i;

	printf("%d\n", i);


	return i;
}