#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("Please, input a character\n");
  printf("%d\n", getchar() != EOF);

  return 0;
}