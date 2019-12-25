#include <stdio.h>

#define ASCII 255
#define SPACE 32
#define NEW_STRING 10
#define TABULATION 9

int main(int argc, char const *argv[])
{
  int c;
  int i, j, v;
  int max_elem;
  unsigned int symbols[ASCII];

  max_elem = 0;

  for (i = 0; i <= ASCII; ++i)
    symbols[i] = 0;

  while ((c = getchar()) != EOF)
  {
    if ((c >= 0 && c <= 255))
      ++symbols[c];
  }

  for (i = 0; i <= ASCII; ++i)
  {
    if (symbols[i] > 0)
    {
      if (symbols[i] > max_elem)
        max_elem = symbols[i];
    }
  }

  putchar('\n');

  printf("Vertical histogram\n\n");

  for (i = 0; i <= ASCII; ++i)
  {
    if (symbols[i] > 0)
    {

      if (i == SPACE)
      {
        printf("Space: ");
        for (j = 0; j < symbols[i]; ++j)
          putchar('*');
        putchar('\n');
      }

      else if (i == NEW_STRING)
      {
        printf("\\n   : ");
        for (j = 0; j < symbols[i]; ++j)
          putchar('*');
        putchar('\n');
      }

      else if (i == TABULATION)
      {
        printf("\\t   : ");
        for (j = 0; j < symbols[i]; ++j)
          putchar('*');
        putchar('\n');
      }

      else
      {
        printf("%c    : ", i);
        for (j = 0; j < symbols[i]; ++j)
          putchar('*');
        putchar('\n');
      }
    }
  }

  putchar('\n');

  printf("Horizontal histogram\n\n");

  printf("     ");

  for (i = 0; i <= ASCII; ++i)
  {
    if (symbols[i] > 0)
    {
      if (i == NEW_STRING)
        printf(" \\n");
      else if (i == TABULATION)
        printf(" \\t");
      else if (i == SPACE)
        printf(" SP");
      else
        printf("  %c", i);
    }
  }

  putchar('\n');

  for (v = 1; v <= max_elem; ++v)
  {
    printf("%d   |", v);

    for (i = 0; i <= ASCII; ++i)
    {
      if (symbols[i] > 0)
      {

        if (symbols[i] >= v)
          printf("  *");
        else
          printf("   ");
      }
    }
    putchar('\n');
  }

  putchar('\n');

  return 0;
}