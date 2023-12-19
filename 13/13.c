#include <stdio.h>

int palindrome(char *str)
{
	char *first = str;
	while (*str != '\0')
	{
		str++;
	}
	str--;
	while (*first != '\0')
	{
		if (*first != *str)
			return 0;
		str--;
		first++;
	}
	return 1;
}

int main()
{
	char str[150];

	printf("enter the word, phrase, number, or other sequence of characters less 150 characters:\n");
	scanf("%149s", str);
	if (palindrome(str))
		printf("%s is a palindrome.\n", str);
	else
		printf("%s isn't a palindrome.\n", str);

	return 0;
}
