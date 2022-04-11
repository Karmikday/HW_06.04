#include <iostream>
using namespace std;
int main()
{
	double D = 0;
	auto m = NULL;
	double x = 0, e = 0;
	cout << "Vvedite m->";
	cin >> m;
	cout << "Vvedite x->";
	cin >> x;
	cout << "Vvedite e->";
	cin >> e;
	if (m > 5 && x > 0 && x < 12)
	{
		cout << "Way 1" << endl;
		for (size_t x = 1; x <= m; x++)
		{
			D += pow(e, x + 1);
		}
	}
	if (typeid(m) == typeid(int) && x != 0)
	{
		cout << "Way 2" << endl;
		for (size_t x = 1; x <= m; x++)
		{
			D += 1 / x;
		}
	}
	else
	{
		cout << "Error" << endl;
	}
	cout << "Answer =>" << D << endl;

}