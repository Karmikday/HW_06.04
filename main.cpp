#include <iostream>
#include "FAC.h"
using namespace std;
int main()
{
	double F;
	double n = 0, x = 0, b = 0;
	cout << "Vvedite n->";
	cin >> n;
	cout << "Vvedite x->";
	cin >> x;
	cout << "Vvedite b->";
	cin >> b;
	if (x > 4 && n > 0)
	{
		cout << "Way 1" << endl;
		F = 1;
		for (size_t k = 1; k <= n; k++)
		{
			F *= (1 + (k * k * x / factorial(k)));
		}
	}
	else if (x > 0 && x < 4 && b > 0)
	{
		cout << "Way 2" << endl;
		F = x * sqrt(pow(b, 3));
	}
	else
	{
		cout << "ERROR";
	}
	cout << "Answer" << F << endl;
}