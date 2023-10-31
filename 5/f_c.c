#include <stdio.h>

/**
 * Program to convert Fahrenheit into Celsius
 * fahr : fahrenheit
 * cel :celsius
 * return : return of the convert
 */

int main()
{
	float fahr, cel;

	printf("enter the temperature in fahrenheit\n");
	scanf("%f", &fahr);

	cel = (fahr - 32) * 5/9;
	printf("%0.2f fahrenheit = %0.2f celsius", fahr, cel);
	getchar();
	return (0);
}
