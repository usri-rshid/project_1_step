#include <stdio.h>

int main(void)
{
	int x = 100;

	printf("Hello , world ! \n");
	printf("\tAnother line of text!\n");
	printf("double quotes \"\n");
	printf("int : %d\n", 4);
	printf("x: %d \n", x);
	printf("%d, %d, %d \n", x, x + 1, x + 2);
	printf("|||%-10.2f|||\n", 5.125);

	return 0;
}
