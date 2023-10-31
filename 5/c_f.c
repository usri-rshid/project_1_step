#include <stdio.h>

/**
 * Program to convert Celsius into Fahrenheit
 * cel : celsius
 * fahr: fahrenheit
 * return : result of the convert
 */

int main()
{
	float cel, fahr;

	printf("enter the temperature in celsius :\n");
	scanf("%f", &cel);

	fahr = (cel * 9 / 5) + 32;
	printf("%0.2f celsius = %0.2f fahrenheit\n", cel, fahr);
	getchar();
	return (0);
}
