#include <iostream>

using namespace std;

int main()
{
	int num1, num2, num3, num4, num5, sum;
	double average;

	cout << "enter 5 numbers : \n";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	sum = num1 + num2 + num3 + num4 + num5;
	average = (double)sum / 100;

	cout << "the sum of 5 marks is " << sum << " and the percentage is " << average << "\n";
	return (0);
}
