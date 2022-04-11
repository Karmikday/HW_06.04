#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double Y = 0;
	auto x = NULL;
	double e = 0;
	cout << "Vvedite x->";
	cin >> x;
	cout << "Vvedite e->";
	cin >> e;
	if (typeid(x) == typeid(int) && x > 0)
	{
		cout << "Way 1" << endl;
		for (size_t i = 1; i <= x; i++)
		{
			Y += pow(e, x - 1) + log10(x) / i;
		}
	}
	else
	{
		cout << "Way 2" << endl;
		for (size_t i = 1; i <= 5; i++)
		{
			Y += pow(e, x / i);
		}
	}
	cout << "Answer =>" << Y << endl;
}