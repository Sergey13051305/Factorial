#include <iostream>
using namespace std;

int fac(int a, int b)
{
for (int i = 1; i <= a; i++)
	{
		b *= i;
	}
return b;
}
void main()
{
	setlocale(LC_ALL, "Rus");
	int a, b=1;

	cout << "¬ведите факториал числа: "; cin >> a;

	int z = fac(a, b);

	cout << z;

}