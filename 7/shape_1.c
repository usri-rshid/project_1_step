#include <stdio.h>

int main()
{
	int x, y;

	printf("hello , enter the length of the shape : \n");
	scanf("%d", &x);
	printf("enter the width of the shape : \n");
	scanf("%d", &y);

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	return (0);
}
