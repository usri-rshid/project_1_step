#include <stdio.h>

int main()
{
	int num1, num2, temp;

	printf("hello , enter first number :\n");
	scanf("%d", &num1);
	printf("enter second number :\n");
	scanf("%d", &num2);
	printf("before swap %d and %d \n", num1, num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("after swap %d and %d \n", num1, num2);
	getchar();
	return (0);
}
