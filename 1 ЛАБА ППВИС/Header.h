#pragma once
#include "vector.h"

class Console
{
public:

	friend istream& operator>>(istream& in, Console& a);

	friend ostream& operator<<(ostream& out, Console& a);

	
private:
	int a, b,c;
};

istream& operator>>(istream& in, Console& a)
{
	in >> a.a;
	in >> a.b;
	in >> a.c;

	return in;
}

ostream& operator<<(ostream& out, Console& a)
{
	out << "Vector(" << a.a << ", " << a.b << ", " << a.c << ")";
	return out;
}
