#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age;
	float height;
	double salary;
	char name[100];
	char gender;

	printf("######################################################\n");
	printf("hello user , can you answer some question !!\n");
	printf("enter your full name :\n");
	scanf(" %[^\n]s", name);
	printf("what's your age: ");
	scanf("%d", &age);
	printf("what's your height (cm):");
	scanf("%f", &height);
	printf("what's your salary:");
	scanf("%lf", &salary);
	printf("are you male(m) or female(f) answer by 'm' or 'f':");
	scanf("%c", &gender);
	if (gender == 'm' || gender == 'M')
		printf("welcome mr. %s ,you are %d years old, your height is %f cm your salary is %.2f \n", name, age, height, salary);
	else if (gender == 'f' || gender == 'F')
		printf("welcome mrs %s ,you are %d years old, your height is %f cm your salary is %.2f \n", name, age, height, salary);

	printf("######################################################\n");
	fflush(stdin);
	return 0;
}
