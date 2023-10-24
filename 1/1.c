#include <stdio.h>

int main()
{
	int num1, num2, num3, num4, num5, sum;
	double average;

	printf("enter 5 numbers : \n");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	sum = num1 + num2 + num3 + num4 + num5;
	average = (double)sum / 100;

	printf("the sum of 5 marks is %d and the percentage is %0.2f \n", sum, average);
	return (0);
}
