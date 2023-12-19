#include <stdio.h>

int main()
{
	int size;
	printf("enter size of array : ");
	scanf("%d", &size);
	int T[size];
	int *P1, *P2;

	for (P1 = T; P1 < T + size; P1++)
	{
		printf("enter element in array : ");
		scanf("%d", P1);
	}

	for (P1 = T, P2 = T + (size - 1); P2 > P1; P1++, P2--)
	{
		int tmp = *P1;
		*P1 = *P2;
		*P2 = tmp;
	}
	printf("display elements :\n");
	for (P1 = T; P1 < T + size; P1++)
	{
		printf("%d\n", *P1);
	}

	return 0;
}
