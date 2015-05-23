#include <iostream>
#include "Fraction.h"
using namespace std;

template<typename T>
bool isEqual(  T item1, T item2)
{
	return (item1 == item2);
}

int main()
{
	int f = 1, s = 4;
	double x = 3, y = 5;
	float r = 5, q = 5;
	Fraction A(1, 2);
	Fraction B(3, 4);


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

	if (isEqual(A, B))
	{
		cout << "Equal";
	}
	else
	{
		cout << "Not Equal";
	}
	cout << "\n";
}