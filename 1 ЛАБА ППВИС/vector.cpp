#include "vector.h"



void class_vector::operator=(class_vector a)
{
	x = a.x;
	y = a.y;
	z = a.z;
}

double class_vector::vector_lenght()
{
	return pow((pow(x, 2) + pow(y, 2) + pow(z, 2)), 0.5);
}

class_vector class_vector::operator+(class_vector a)
{
	class_vector b;
	b.x = x + a.x;
	b.y = y + a.y;
	b.z = z + a.z;
	return b;
}

class_vector class_vector::operator-(class_vector a)
{
	class_vector b;
	b.x = x - a.x;
	b.y = y - a.y;
	b.z = z - a.z;
	return b;
}


class_vector class_vector::operator*(class_vector a)
{
		class_vector b;
		b.x = (y * a.z) - (z * a.y);
		b.y = (z * a.x) - (x * a.z);
		b.z = (x * a.y) - (y * a.x);
		return b;
}

class_vector class_vector::operator*(double a)
{
	class_vector b;
	b.x = x * a;
	b.y = y * a;
	b.z = z * a;
	return b;
}

void class_vector::operator*=(double a)
{
	x *= a;
	y *= a;
	z *= a;
}

class_vector class_vector::operator/(class_vector a)
{
	a.x = 1 / a.x;
	a.y = 1 / a.y;
	a.z = 1 / a.z;
	class_vector b;
	b.x = (y * a.z) - (z * a.y);
	b.y = (z * a.x) - (x * a.z);
	b.z = (x * a.y) - (y * a.x);
	return b;
}

void class_vector::operator+=(class_vector a)
{
	x += a.x;
	y += a.y;
	z += a.z;
}

void class_vector::operator-=(class_vector a)
{
	x -= a.x;
	y -= a.y;
	z -= a.z;
}

void class_vector::operator*=(class_vector a)
{
	class_vector b;
	b.x = (y * a.z) - (z * a.y);
	b.y = (z * a.x) - (x * a.z);
	b.z = (x * a.y) - (y * a.x);
	x = b.x;
	y = b.y;	
	z = b.z;
}

void class_vector::operator/=(class_vector a)
{
	a.x = 1 / a.x;
	a.y = 1 / a.y;
	a.z = 1 / a.z;
	class_vector b;
	b.x = (y * a.z) - (z * a.y);
	b.y = (z * a.x) - (x * a.z);
	b.z = (x * a.y) - (y * a.x);
	x = b.x;
	y = b.y;
	z = b.z;
}

double class_vector::operator^(class_vector a)
{
	return (x * a.x + y * a.y + z * a.z) / (pow(pow(x, 2) + pow(y, 2) + pow(z, 2), 0.5) * pow(pow(a.x, 2) + pow(a.y, 2) + pow(a.z, 2), 0.5));
}

bool class_vector::operator>(class_vector a)
{
	bool index;
	(vector_lenght() > a.vector_lenght()) ? index = 1 : index = 0;
	return index;
}

bool class_vector::operator<(class_vector a)
{
	bool index;
	(vector_lenght() < a.vector_lenght()) ? index = 1 : index = 0;
	return index;
}

bool class_vector::operator<=(class_vector a)
{
	bool index;
	(vector_lenght() <= a.vector_lenght()) ? index = 1 : index = 0;
	return index;
}

bool class_vector::operator>=(class_vector a)
{
	bool index;
	(vector_lenght() >= a.vector_lenght()) ? index = 1 : index = 0;
	return index;
}

bool class_vector::operator==(class_vector a)
{
	bool index;
	(vector_lenght() == a.vector_lenght()) ? index = 1 : index = 0;
	return index;
}

bool class_vector::operator!=(class_vector a)
{
	bool index;
	(vector_lenght() != a.vector_lenght()) ? index = 1 : index = 0;
	return index;
}

istream& operator>>(istream& in, class_vector& a)
{
	in >> a.x;
	in >> a.y;
	in >> a.z;

	return in;
}

ostream& operator<<(ostream& out, class_vector& a)
{
	out << "Vector(" << a.x << ", " << a.y << ", " << a.z << ")";
	return out;
}
