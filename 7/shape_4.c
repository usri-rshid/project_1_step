#include <stdio.h>

int main()
{
	int length;

	printf("hello, enter the length of the shape (pyramide):\n");
	scanf("%d", &length);

	for (int x = 0; x < length; x++)
	{
		for (int y = 1; y < length - x; y++)
		{
			printf(" ");
		}
		for (int z = 0; z < x + x - 1; z++)
		{
			printf("$");
		}
		printf("\n");
	}
	return (0);
}
