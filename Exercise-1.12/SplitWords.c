#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c, isLine;

  isLine = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == '\n' || c == '\t' || c == ' ')
    {
      if (!isLine)
      {
        putchar('\n');
        isLine = 1;
      }
    }
    else
    {
      putchar(c);
      isLine = 0;
    }
  }

  return 0;
}
