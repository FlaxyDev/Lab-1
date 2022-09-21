#include "FnClass.h"
void FnClass::Fn_a(double x, double y, double z)
{
	a = pow(y, 2) + ((z/pow(x,2))+pow(sin(b),2)) / (abs((pow(x,2)+y)/(z+pow(x,3)/3)) - log(abs(pow(x,2)+z)));
}
void FnClass::Fn_b(double x, double y, double z)
{
	b = pow(abs(((x+y)/pow(abs(z), 0.6))+ pow(sin((x+pow(z,2)) / (2 * x + y)), 2)), 1.0 / 3.0) - z*exp((pow(x,2)-y)/(1+z));
}