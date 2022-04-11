#include <iostream>
using namespace std;
int main()
{
	double C = 0;
	double e = 0;
	const double p = 3.14;
	auto x = NULL;
	cout << "Vvedite e->";
	cin >> e;
	cout << "Vvedite x->";
	cin >> x;
	if (x < 10)
	{
		cout << "Way 1" << endl;
		C += x * pow(e, x * x - 1);
	}
	if (typeid(x) == typeid(int) && x > 1)
	{
		cout << "Way 2" << endl;
		for (size_t i = 1; i <= x; i++)
		{
			C += p * pow(e, i);
		}
	}
	else
	{
		cout << "Error"<< endl;
	}
	cout << "Answer =>" << C << endl;
}