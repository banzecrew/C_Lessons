#include <stdio.h>

#define MAXLEN 15

int getline(char line[], int lim);
void reverse(char line[]);
int getlen(char line[]);


int main(int argc, char const *argv[])
{
	char c;
	char str[MAXLEN];

	str[0] = '1';
	str[1] = '2';
	str[2] = '3';
	str[3] = '4';
	str[4] = '5';
	str[5] = '\0';

	printf("%s\n", str);

	reverse(str);

	printf("%s\n", str);
	/*
	printf("Enter string or press Ctrl+C\n");

	while ((c = getline(str, MAXLEN))) {
		printf("Original string: %s\n", str);
		reverse(str);
		printf("Reversed string: %s\n", str);
	}
	*/
	return 0;
}

int getline(char line[], int lim)
{
	int i;
	char c;

	for (i = 0; i <= lim; ++i)
		line[i] = 0;

	for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
			line[i] = c;

	line[i] = '\0';

	return i;
}

void reverse(char line[])
{
	int begin, len;

	len = getlen(line);

	printf("len is %d\n", len);

	for (begin = 0; begin < (len - begin); ++begin) {
		line[begin] = line[begin] + line[len];
		line[len]   = line[begin] - line[len];
		line[begin] = line[begin] - line[len];
	}
}

int getlen(char line[])
{
	int i;

	for (i = 0; line[i] != '\0'; ++i);
	

	return i - 1;
}