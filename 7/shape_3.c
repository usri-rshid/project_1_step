#include <stdio.h>

int main()
{
	int length;

	printf("hello, enther the length of the shape :\n");
	scanf("%d", &length);
	for (int x = 1; x <= length; x++)
	{
		for (int y = length - x; y >= 0; y--)
		{
			printf(" ");
		}
		for (int z = 1; z <= x; z++)
		{
			printf("$");
		}
		printf("\n");
	}

	return (0);
}
