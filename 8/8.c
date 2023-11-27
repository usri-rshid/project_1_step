#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
this first game using the basic of c language

 */

int main(int argc, char *argv[]) {
	int secretNumber, playerNumber, level = 0, tried = 1, min = 1, max = 100, flag = 0;
  	srand(time(0));
  	secretNumber = rand() % max + min;
  	
  	
	printf("hello this game about guessing winner number between 1 and 100 \n\n");
	printf("let's  start the game !!!\n");
	printf("what level you want to play : \n");
	printf("level 1 : between 1 and 100\n");
	printf("level 2 : between 1 and 1000\n");
	printf("level 3 : between 1 and 10000\n");
	scanf("%d",&level);
	for ( ; flag == 1; flag += 0 )
	{
	switch (level)
	{
	
		case 1:
			max = 100;
			flag = 1;
			break;
		case 2:
			max = 1000;
			flag = 1;
			break;
		case 3:
			max = 10000;
			flag = 1;
			break;
		default:
			printf("\nwrong level\n");
			scanf("%d",&level);
	}
	}		
		
	do {
	
			printf("enter number between 1 and 100 : ");
			scanf("%d", &playerNumber);
			if (secretNumber < playerNumber)
			{
					printf("your number is greater\n");
					tried += 1;		
			}
			else if (secretNumber > playerNumber)
			{
					printf("your number is smaller\n");
					tried += 1;		
			}
			else
			{
				printf("we have winner here !!!! you have found in %d tries only ! congrats!!",tried);
			}
		}
		while(secretNumber != playerNumber);
  
	printf("\nsucces !\n");
	return 0;
}
