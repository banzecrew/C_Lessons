#include <stdio.h>

#define SBREAKER 10
#define ARRAY_SIZE 30

void fillArray(char s[], int len);
void transfer(char ch, int sep);

int main(int argc, char const *argv[])
{
  int i;

  char sarray[ARRAY_SIZE];

  fillArray(sarray, ARRAY_SIZE);

  for (i = 0; sarray[i] != '\0'; ++i)
    transfer(sarray[i], SBREAKER);

  return 0;
}

void fillArray(char s[], int len)
{
  int i;

  for (i = 0; i < (len - 1); ++i)
    s[i] = 'g';
  s[i] = '\0';
}

void transfer(char ch, int sep)
{
  int i;

  for (i = 1; ch != EOF; ++i)
  { /* lol */
    if (sep == i)
    {
      putchar('\n');
      i = 1;
    }
    printf("%c", ch);
  }
}
