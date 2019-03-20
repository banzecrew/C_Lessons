#include <stdio.h>

#define IN_WORD  1
#define OUT_WORD 0
#define CAPACITY 20

int main(int argc, char const *argv[])
{
	int c, i, elems, state;
	int words[CAPACITY];

	state = OUT_WORD;
	elems = 0;

	for (i = 0; i < CAPACITY; ++i)
		words[i] = 0;

	printf("Enter characters or press \"Ctrl+D\"\n");

	while ((c = getchar()) != EOF && elems < CAPACITY) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			state = IN_WORD;
			words[elems] = c;
			++elems;
		} else if (state == IN_WORD) {
			state = OUT_WORD;
			words[elems] = ' ';
			++elems;
		}
	}

	for (i = 0; i < elems; ++i)
		printf("Words[%d]: %7c\n", i, words[i]);

	if (elems == CAPACITY)
		printf("Word count limit reached\n");

	printf("Dictionary:\n");
	for (i = 0; i < elems; ++i) {
		if (words[i] != ' ') {
			printf("%c", words[i]);
		} else printf("\n");
	}
	printf("\n");

	return 0;
}

/*

		variant 1
	    _________________________
 	   /________________________/|
	+8|                         ||
	+7|                         ||
	+6|                         ||
	+5|                         ||
	+4|         ---             ||
	+3| ---     ---             ||
	+2| ---     ---       ---   ||
	+1| ---     ---       ---   ||
	  |_________________________|/
	    hey		test	  ne



		variant 2

	+8|
	+7|
	+6|
	+5| <--bidlo
	+4| <--test chort 
	+3|	<--hey her lox
	+2| <--ne da
	+1|


		variant 3

	+1| t  b  c
	+2| e  i  h
	+3| s  d  o
	+4| t  l  r
	+5|    o  t
	+6|
	+7| 
	+8|
	













*/