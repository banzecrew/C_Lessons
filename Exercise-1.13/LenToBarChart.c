#include <stdio.h>

#define IN_WORD  1
#define OUT_WORD 0
#define CAPACITY 20

int main(int argc, char const *argv[])
{
	int c, i, j, elems, state;
	int words[CAPACITY + 1];

	state = OUT_WORD;
	elems = 0;

	for (i = 0; i <= CAPACITY; ++i)
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

	for (i = 0; i <= elems; ++i)
		printf("Words[%d]: %7c %3d\n", i, words[i], words[i]);

	printf("Dictionary:\n");
	for (i = 0; i < elems; ++i) {
		if (words[i] != ' ') {
			printf("%c", words[i]);
		} else printf("\n");
	}
	printf("\n");

	int     _word_len = 0;
	int _max_word_len = 0;

	for (i = 0; i <= elems; ++i) {
		if (words[i] != ' ' && words[i] != 0) {
			++_word_len;
		} else {
			if (_word_len > _max_word_len)
				_max_word_len = _word_len;
			_word_len = 0;
		}
	}

	_word_len = 0;


	printf("Max word len: %d\n", _max_word_len);

	for (i = 0; i <= (_max_word_len); ++i)
		printf("__");

	printf("\n\n");

	for (i = 0; i <= elems; ++i) {
		if (words[i] != ' ' && words[i] != 0) {
			printf("%c", words[i]);
			++_word_len;
		} else {
			printf("\n");
			for (j = 0; j < _word_len; ++j)
				printf("| ");
			_word_len = 0;
			printf("\n");
		}
	}

	for (i = 0; i <= (_max_word_len); ++i)
		printf("__");

	printf("\n");
	
	for (i = 0; i <= _max_word_len; ++i)
		printf("%d ", i);

	printf("\n");

	for (i = 0; i <= _max_word_len; ++i)
		printf("+ ");
	
	printf("\n");




	if (elems == CAPACITY)
		printf("Word count limit reached\n");


	return 0;
}

/*
	horzontal hystogram
	************************
    ########################
	bidlo### --------*------
	######## ---------------
	lox##### ----*----------
	######## ---------------
	sobaka # ----------*----
	######## --------------- 
	y####### *--------------
	#########1#2#3#4#5#6#7#8

	




		variant 1
	
	_____________
   
	bidlo
	| | | | | 
	lox
	| | |
	chort
	| | | | |
	sobaka
	| | | | | |
	_____________
	1 2 3 4 5 6 7
	+ + + + + + +


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
	

		variant 4
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









*/