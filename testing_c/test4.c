#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char message[] = " Quisque efficitur sapien a metus posuere condimentum nec vitae sapien. Nulla lobortis massa sit amet massa dignissim, vel malesuada nisi venenatis.";
	int lenstr = strlen(message);
	int a = 0, e = 0, u = 0, i = 0, o = 0, y = 0, vowel = 0, consom = 0;
	int j;

	for (j = 0; j < lenstr; j++)
	{
		switch (toupper(message[j]))
		{
		case 'A':
			a++;
		case 'E':
			e++;
		case 'Y':
			y++;
		case 'U':
			u++;
		case 'O':
			o++;
		case 'I':
			i++;
			vowel++;
			break;
		default:
			consom++;
			break;
		}
	}
	printf(" a = %d\n", a);
	printf(" e = %d\n", e);
	printf(" y = %d\n", y);
	printf(" u = %d\n", u);
	printf(" i = %d\n", i);
	printf(" o = %d\n", o);
	printf(" vowel = %d\n", vowel);
	printf(" consom = %d\n", consom);
	printf("vowels + consonants = %d\n", lenstr);
	return 0;
}
