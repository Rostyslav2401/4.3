// Lab_04_3.cpp
// < ��������� ��������� >
// ����������� ������ No 4.3
// ������������, ������ ��������: ������� � �����������.
// ������ 21
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a;
	double b;
	double c;
	double x, xp, xk, dx,  F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x < 0 && b != 0)
			F = a * pow(x, 2) + b;
		else
			if (x > 0 && b == 0)
				F = (x - a) / (x - c);
			else
		         if (!(x < 0 && b != 0) && !(x > 0 && b == 0))
			        F = x / c;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}