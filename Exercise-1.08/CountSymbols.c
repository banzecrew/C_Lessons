#include <stdio.h>

int main(int argc, char const *argv[])
{
  int c;
  double space, tab, ns;

  printf("\nPress any key...\n");
  printf("*****************************\n");
  printf("Press Ctrl-D for end of input\n\n");

  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
      ++space;
    if (c == '\t')
      ++tab;
    if (c == '\n')
      ++ns;
  }

  printf("Number of spaces: %.0f\n", space);
  printf("Number of tabs: %.0f\n", tab);
  printf("Number of strings: %.0f\n", ns);

  return 0;
}