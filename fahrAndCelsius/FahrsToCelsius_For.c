#include <stdio.h>

int main(int argc, char const *argv[])
{
	float celsius, fahr;
	int step, min_temp, max_temp;

	step = 20;
	min_temp = 0;
	max_temp = 300;
	celsius = 0;

	printf("%s\t%s\n", "Fahrenheits", "Celsius");

	for (fahr = max_temp; fahr >= min_temp; fahr -= step){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%11.f%12.1f\n", fahr, celsius);
	}

	return 0;
}