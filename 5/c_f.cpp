#include <iostream>

using namespace std;

int main()
{
	float cel, fahr;

	cout << "hello, enter the temperature in celsius :\n";
	cin >> cel;

	fahr = (cel * 9 / 5) + 32;
	cout << cel << " celsius = " << fahr << " fahrenheit \n";
	getchar();
	return (0);
}
