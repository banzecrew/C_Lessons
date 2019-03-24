#include <stdio.h>

float GetFahrsFromCel(float);

int main(int argc, char const *argv[])
{
	float celsium;
	int step, max_temp, min_temp;

	step = 16;
	min_temp = 0;
	max_temp = 300;
	celsium = min_temp;

	printf("%s\t%s\n", "Celsiums", "Fahrenheits" );

	while (celsium <= max_temp) {
		printf("%8.1f%14.1f\n", celsium, GetFahrsFromCel(celsium));
		celsium += step;
	}

	return 0;
}

float GetFahrsFromCel(float celsium)
{
	float fahr;

	fahr = celsium * (9.0 / 5.0) + 32;

	return fahr;
}