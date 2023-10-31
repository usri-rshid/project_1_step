#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, result;
	char operator;

	printf("=============calculator=for=2=variables================\n\n");

	printf("enter first variable :\n");
	scanf("%lf", &a);
	printf("enter second variable : \n");
	scanf("%lf", &b);
	printf("enter arithmetic operator : + - * modulo / : \n");
	scanf(" %c", &operator);
	switch (operator)
	{
	case '+':
		result = a + b;
		printf("%0.2lf + %0.2lf = %lf\n", a, b, result);
		break;
	case '-':
		result = a - b;
		printf("%0.2lf - %0.2lf = %lf\n", a, b, result);
		break;
	case '*':
		result = a * b;
		printf("%0.2lf - %0.2lf = %lf\n", a, b, result);
		break;
	case '/':
		if (b == 0)
			printf("can't be divised by 0\n");
		else
			result = a / b;
		printf("%0.2lf / %0.2lf = %lf\n", a, b, result);
		break;
	case '%':
		result = fmod(a, b);
		printf("%0.2lf %% %0.2lf = %lf\n", a, b, result);
		break;
	default:
		printf("operator doesn't exsit\n");
	}
	return (0);
}
