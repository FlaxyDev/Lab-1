#pragma once
#include "cmath"
class FnClass
{
private:
	double a, b;
public:
	FnClass() { a = b = 1; }
	void Fn_a(double x, double y, double z);
	void Fn_b(double x, double y, double z);
	double Get_a() { return a; }
	double Get_b() { return b; }
	~FnClass() {}
};

