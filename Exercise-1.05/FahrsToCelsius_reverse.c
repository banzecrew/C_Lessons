#include <stdio.h>

#define STEP 20
#define MIN_TEMP 0
#define MAX_TEMP 300

int main(int argc, char const *argv[])
{
  float celsius, fahr;

  printf("%s\t%s\n", "Fahrenheits", "Celsius");

  for (fahr = MAX_TEMP; fahr >= MIN_TEMP; fahr -= STEP)
  {
    printf("%11.f%12.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }

  return 0;
}