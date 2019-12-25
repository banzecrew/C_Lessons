#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c, isSpace;
  isSpace = 0;

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      if (!isSpace)
      {
        putchar(c);
        isSpace = 1;
      }
    }
    else
    {
      putchar(c);
      isSpace = 0;
    }
  }

  return 0;
}