#include <stdio.h>

#define LIP 80
#define LIMIT 1000

int getstrlen(char line[], int lim, int step);

int main(int argc, char const *argv[])
{
  long c;
  char line[LIMIT];

  while ((c = getstrlen(line, LIMIT, LIP)))
    if (c > LIP)
      printf("%s\n", line);

  return 0;
}

int getstrlen(char line[], int lim, int step)
{
  int c, i;

  for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n';)
    line[i++] = c;

  if (c == '\n')
    i++;

  line[i] = '\0';

  return i;
}