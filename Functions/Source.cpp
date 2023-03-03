#include <iostream>
using namespace std;


int step(int a, int b, int c)
{
	for (int i = 1; i <= b; i++)
	{
		c *= a;
	}
	return c;
}
void main()
{

	setlocale(LC_ALL, "rus");
	int a, b, c=1;
	cout << "Ведите число: "; cin >> a;
cout << "Введите степень: "; cin >> b;


	int z = step (a, b, c);
	cout << a << " В степени " << b << " = " << z;
}

