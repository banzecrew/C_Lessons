#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0
#define CAPACITY 200
#define END 0

int main(int argc, char const *argv[])
{
  int c, i, j, elems, state;
  int words[CAPACITY + 1];
  int _word_len = 0;
  int _max_word_len = 0;

  state = OUT_WORD;
  elems = 0;

  for (i = 0; i <= CAPACITY; ++i)
    words[i] = 0;

  printf("Enter characters or press \"Ctrl+D\"\n");

  while ((c = getchar()) != EOF && elems < CAPACITY)
  {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
      state = IN_WORD;
      words[elems] = c;
      ++elems;
    }
    else if (state == IN_WORD)
    {
      state = OUT_WORD;
      words[elems] = ' ';
      ++elems;
    }
  }

  printf("\nDictionary:\n");

  for (i = 0; i < elems; ++i)
  {
    if (words[i] != ' ')
    {
      printf("%c", words[i]);
    }
    else
      printf("\n");
  }

  printf("\n");

  for (i = 0; i <= elems; ++i)
  {
    if (words[i] != ' ' && words[i] != END)
    {
      ++_word_len;
    }
    else
    {
      if (_word_len > _max_word_len)
        _max_word_len = _word_len;
      _word_len = 0;
    }
  }

  _word_len = 0;

  printf("\nVertical histogram\n");
  for (i = 0; i <= (_max_word_len + 1); ++i)
    printf("##");

  printf("\n");

  for (i = 0; i <= elems; ++i)
  {
    if (words[i] != ' ' && words[i] != END)
    {
      printf("%c", words[i]);
      ++_word_len;
    }
    else
    {
      printf("\n");
      for (j = 0; j < _word_len; ++j)
        printf("| ");
      _word_len = 0;
      printf("\n");
    }
  }

  for (i = 0; i <= (_max_word_len + 1); ++i)
    printf("##");

  printf("\n");

  for (i = 1; i <= (_max_word_len + 1); ++i)
    printf("%d ", i);

  printf("\n");

  for (i = 0; i <= _max_word_len; ++i)
    printf("+ ");

  printf("\n\n");

  printf("Horizontal histogram\n\n");

  _word_len = 0;

  for (i = 0; i <= elems; ++i)
  {
    if (words[i] != ' ' && words[i] != END)
    {
      printf("%c", words[i]);
      ++_word_len;
    }
    else
    {
      for (j = 1; j < ((_max_word_len - _word_len) + 2); ++j)
        printf(" ");

      for (j = 1; j <= (_max_word_len + 3); ++j)
      {
        if (j == _word_len)
          printf("*");
        else
          printf("--");
      }
      _word_len = 0;
      printf("\n");
    }
  }

  for (i = 1; i < (_max_word_len + 2); ++i)
  {
    printf("#");
  }

  for (i = 1; i <= ((_max_word_len - _word_len) + 2); ++i)
  {
    printf("%d#", i);
  }

  printf("\n");

  if (elems == CAPACITY)
    printf("Word count limit reached\n");

  return 0;
}