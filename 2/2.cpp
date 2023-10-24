#include <iostream>

using namespace std;

int main()
{
	int a, b, temp;

	cout << "enter first number :\n";
	cin >> a;
	cout << "enter second number :\n";
	cin >> b;
	cout << "before swap " << a << " and " << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "after swap " << a << " and " << b << endl;
	getchar();
	return (0);
}
