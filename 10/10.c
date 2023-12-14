#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int fact(int number);

int main(int argc, char *argv[])
{

	int userOutput;
	printf("hello, enter number for calculate factorial: \n");
	scanf("%d", &userOutput);
	while (true)
	{

		if (scanf("%d", &userOutput) == 1 && userOutput > 0)
		{
			printf("the result of factorial of %d is %d\n", userOutput, fact(userOutput));
			break;
		}
		else
		{
			printf("please enter number interger and greater than 0\n");
			scanf("%d", &userOutput);
		}
		int buffer;
		while ((buffer = getchar()) != '\n')
		{
		}
	}

	return 0;
}
int fact(int number)
{
	if (number == 1)
		return 1;
	else
		return number * fact(number - 1);
}

