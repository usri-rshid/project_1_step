#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b, result;
	char op;

	cout << "==============calculator=for=2=variables==========\n";

	cout << "enter first variable :\n";
	cin >> a;
	cout << "enter arithmetic operator : + - * / % :\n";
	cin >> op;
	cout << "enter second variable :\n";
	cin >> b;

	switch (op)
	{
	case '+':
		result = a + b;
		cout << a << " + " << b << " = " << result << "\n";
		break;
	case '-':
		result = a - b;
		cout << a << " - " << b << " = " << result << "\n";
		break;
	case '*':
		result = a * b;
		cout << a << " * " << b << " = " << result << "\n";
		break;
	case '/':
		if (b == 0)
			cout << "can't be divised by 0\n";
		else
			result = a / b;
		cout << a << " / " << b << " = " << result << "\n";
		break;
	case '%':
		result = fmod(a, b);
		cout << a << " % " << b << " = " << result << "\n";
		break;
	default:
		cout << "operator doesn't excist\n";
	}
	return (0);
}
