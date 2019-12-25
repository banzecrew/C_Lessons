#include <stdio.h>

#define MAXLEN 100
#define TAB 9
#define SPACE 32

int GetStr(char str[], int lim);

int main(int argc, char const *argv[])
{
  int c;
  char str[MAXLEN];

  while ((c = GetStr(str, MAXLEN)))
    printf("%s\n", str);

  return 0;
}

int GetStr(char str[], int lim)
{
  int c, i;
  int isSpace;

  i = isSpace = 0;

  while (i < (lim - 1) && (c = getchar()) != EOF && c != '\n')
  {
    if (c == TAB || c == SPACE)
    {
      if (!isSpace)
      {
        str[i] = ' ';
        isSpace = 1;
      }
    }
    else
    {
      str[i] = c;
      isSpace = 0;
    }
    ++i;
  }

  str[i] = '\0';

  return i;
}