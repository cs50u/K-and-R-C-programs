#include <stdio.h>

/* print Celsius-Fahrenheit table 
	for celsius = 0, 20, ..., 300; floating-point version */
int main()
{
	printf("C\tF\n");
	float fahr, celsius;
	int lower, upper, step;

	lower = -40;      /* lower limit of temperature table */
	upper = 300;    /* upper limit */
	step = 20;      /* step size */

	celsius = lower;
	while (celsius <= upper) {
		fahr = ((9.0 * celsius) / 5.0) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}