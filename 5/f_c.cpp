#include <iostream>

using namespace std;

int main()
{
	float cel ,fahr;

	cout << "hello, enter the temperature in fahrenheit :\n";
	cin >> fahr;

	cel = (fahr - 32) * 5/9;
	cout << fahr << " fahrenheit = " << cel << " celsius\n";
        getchar();
	return (0);
}	
