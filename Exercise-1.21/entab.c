#include <stdio.h>

#define TAB_STOP 8

void entab(int stop);

int main(int argc, char const *argv[])
{
  entab(TAB_STOP);

  return 0;
}

void entab(int stop)
{
  int c, nb, nt, pos;

  nb = nt = 0;

  for (pos = 1; (c = getchar()) != EOF; ++pos)
    if (c == ' ')
    {
      if (pos % TAB_STOP)
        ++nb;
      else
      {
        nb = 0;
        ++nt;
      }
    }
    else
    {
      for (; nt > 0; --nt)
        putchar('\t');
      if (c == '\t')
        nb = 0;
      else
      {
        for (; nb > 0; --nb)
          putchar('_');
        putchar(c);
        if (c == '\n')
          pos = 0;
        else if (c == '\t')
          pos = pos + (TAB_STOP - (pos - 1) % TAB_STOP) - 1;
      }
    }
}