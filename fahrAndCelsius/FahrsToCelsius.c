#include <stdio.h>

int main(int argc, char const *argv[])
{
	int step, min_temp, max_temp;
	float fahr, celsius;

	step = 20;
	min_temp = 0;
	max_temp = 300;
	fahr = min_temp;
	celsius = 0;

	printf("%s\t%s\n", "Fahrenheits", "Celsius");

	while(fahr <= max_temp){
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%11.f%12.1f\n", fahr, celsius);
		fahr += step;
	}


	return 0;
}