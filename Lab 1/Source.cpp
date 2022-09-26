#include <iostream>
#include "windows.h";
#include <iomanip>   
#include "FnClass.h"
using std::cout;
using std::endl;
int main()
{
	SetConsoleOutputCP(1251);
	double x = 0.48 * 4;
	double y = 0.47 * 4;
	double z = -1.32 * 4;
	FnClass Zavd;
	Zavd.Fn_b(x, y, z);
	Zavd.Fn_a(x, y, z);
	cout << "a: " << Zavd.Get_a() << "\nb: " << Zavd.Get_b() <<endl;
	cout << "\nТабуляція функцій a і b:" << endl;
	for (double x = -1; x <= 1; x = x + 0.2)
	{
		if (x < 1e-16 && x>-1e-16)
		{
			cout << "На нуль дітили не можна!" << endl;
			cout << "--------------------------------------" << endl;
		}
		else 
		{
			Zavd.Fn_b(x, y, z);
			Zavd.Fn_a(x, y, z);
			cout << "x: " << x << "\na: " << Zavd.Get_a() << "\nb: " << Zavd.Get_b() << endl;
			cout << "--------------------------------------" << endl;
		}
	}
	return 0;
}