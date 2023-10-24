#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "enter first number :\n";
	cin >> a;
	cout << "enter second number: \n";
	cin >> b;
	cout << "before swap " << a << " and " << b << "\n";
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "after swap " << a << " and " << b << "\n";

	getchar();
	return (0);
}
