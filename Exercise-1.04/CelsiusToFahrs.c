#include <stdio.h>

int main(int argc, char const *argv[])
{
  float fahr, celsium;
  int step, max_temp, min_temp;

  step = 16;
  min_temp = 0;
  max_temp = 300;
  fahr = 0;
  celsium = min_temp;

  printf("%s\t%s\n", "Celsiums", "Fahrenheits");

  while (celsium <= max_temp)
  {
    fahr = celsium * (9.0 / 5) + 32;
    printf("%8.1f%14.1f\n", celsium, fahr);
    celsium += step;
  }

  return 0;
}