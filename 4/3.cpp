#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cout << "hello, enter 3 numbers interger : \n";
	cin >> a >> b >> c;
	if (a >= b && a >= c)
	{
		printf("%d is greatest\n", a);
	}
	else if (b >= a && b >= c)
	{
		printf("%d is greatest\n", b);
	}
	else if (c >= a && c >= b)
	{
		printf("%d is greatest\n", c);
	}
	getchar();
	return (0);
}
