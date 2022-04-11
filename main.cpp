#include <iostream>
#include "Fac.h"
#include <typeinfo>
#include <math.h>
using namespace std;
int main()
{
	double Y = 1;
	auto n = NULL;
	cout << "Vvedite n->";
	cin >> n;	
	if (typeid(n) == typeid(int) && n < 10)
	{
		cout << "Way 1" << endl;
		Y = 0;
		for (size_t i = 1; i <= n; i++)
		{
			Y += 1/ pow(i, 5);
		} 
	}
	else
	{
		cout << "Way 2" << endl;
		for (size_t i = 1; i <= 10; i++)
		{
			Y *= (2 + (1 / Fac(i)));
		}
	}
	cout << "Answer =>" << Y << endl;
}