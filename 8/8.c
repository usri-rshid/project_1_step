#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
this first game using the basics of the C language
*/

int main(int argc, char *argv[])
{
	int secretNumber, playerNumber, level = 0, tried = 1, min = 1, max = 100, flag = 0;
	srand(time(0));
	secretNumber = rand() % max + min;

	printf("Hello! This game is about guessing a winning number between 1 and 100.\n\n");
	printf("Let's start the game!!!\n");
	printf("What level do you want to play?\n");
	printf("Level 1: between 1 and 100\n");
	printf("Level 2: between 1 and 1000\n");
	printf("Level 3: between 1 and 10000\n");
	scanf("%d", &level);

	while (flag == 0)
	{
		if (level == 1)
		{
			max = 100;
			flag = 1;
		}
		else if (level == 2)
		{
			max = 1000;
			flag = 1;
		}
		else if (level == 3)
		{
			max = 10000;
			flag = 1;
		}
		else
		{
			printf("\nWrong level. Please enter a valid level: ");
			scanf("%d", &level);
		}
	}

	do
	{
		printf("Enter a number between 1 and %d: ", max);
		scanf("%d", &playerNumber);

		if (playerNumber < 1 || playerNumber > max)
		{
			printf("Invalid input. Please enter a number between 1 and %d.\n", max);
		}
		else
		{
			if (secretNumber < playerNumber)
			{
				printf("Your number is greater.\n");
				tried += 1;
			}
			else if (secretNumber > playerNumber)
			{
				printf("Your number is smaller.\n");
				tried += 1;
			}
			else
			{
				printf("We have a winner here!!! You found it in %d tries. Congratulations!!\n", tried);
			}
		}
	} while (secretNumber != playerNumber);

	printf("\nSuccess!\n");
	return 0;
}