#include <stdio.h>

#define IN_WORD  1
#define OUT_WORD 0
#define CAPACITY 10

int main(int argc, char const *argv[])
{
	int c, i, elems, word_len, state;
	int words[CAPACITY];

	state = OUT_WORD;
	elems = word_len = 0;

	for (i = 0; i < CAPACITY; ++i)
		words[i] = 0;

	while ((c = getchar()) != EOF && elems < CAPACITY) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN_WORD) {
				state = OUT_WORD;
				words[elems] = ' ';
				++elems;
			}
		}
		else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
			state = IN_WORD;
			words[elems] = c;
			++elems;
		}
	}

	if (elems == CAPACITY)
		printf("Word count limit reached\n");

	printf("Your words: \n");

	for (i = 0; i < elems; ++i)
		printf("Words[%d]: %7c\n", i, words[i]);

	for (i = 0; i < elems; ++i) {

	}

	return 0;
}

/*

		variant 1
		_________________________
	   /________________________/|
	+8|							||
	+7|							||
	+6|							||
	+5|							||
	+4|			---				||
	+3| ---     ---				||
	+2| ---     ---       ---	||
	+1| ---		---		  ---	||
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














*/