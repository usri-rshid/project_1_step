#include <stdio.h>

int main()
{
	int length;

	printf("hello, enter the length of the shape : \n");
	scanf("%d",&length);

	for(int x = 0; x < length ; x++)
	{
		for(int y = 0; y <= x; y++)
		{
			printf("$");
		}
		printf("\n");
	}
	return (0);
}
