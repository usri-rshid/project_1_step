#include <stdio.h>

int main()
{
	int length;

	printf("hello, enter the length of the shape (diamond):\n");
	scanf("%d", &length);

	for (int x = 0; x <= length; x++)
	{
		for (int y = 1; y <= length - x; y++)
		{
			printf(" ");
		}
		for (int z = 1; z <= x + x - 1; z++)
		{
			printf("$");
		}
		printf("\n");
	}
	for (int i = length - 1; i >= 1; i--)
	{
		for (int z = 1; z <= length - i; z++)
		{
			printf(" ");
		}
		for (int a = 1; a <= i + i - 1; a++)
		{
			printf("$");
		}
		printf("\n");
	}
	return (0);
}
