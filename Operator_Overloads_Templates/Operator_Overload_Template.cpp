#include <iostream>
using namespace std;

template<typename T>
bool isEqual(const T item1, const T item2)
{
	return item1 == item2;
}

int main()
{
	int f = 1, s = 4;
	double x = 3, y = 5;
	float r = 5, q = 5;

	if (isEqual(s, f))
	{
		cout << "Equal";
	}
	else
	{
		cout << "Not Equal";
	}
	cout << "\n";

	if (isEqual(x, y))
	{
		cout << "Equal";
	}
	else
	{
		cout << "Not Equal";
	}
	cout << "\n";

	if (isEqual(r, q))
	{
		cout << "Equal";
	}
	else
	{
		cout << "Not Equal";
	}
	cout << "\n";
}