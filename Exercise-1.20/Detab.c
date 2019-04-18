#include <stdio.h>

#define MAXLEN 15

int getline(char str[], int lim);

int main(int argc, char const *argv[])
{
	

	return 0;
}

int getline(char str[], int lim)
{
	int i;
	int c;

	for (i = 0; i < (lim - 1) && (c = getchar()) != '\n'; ++i) {
		str[i] = c;
	}

	str[i] = '\0';

	return i;
}