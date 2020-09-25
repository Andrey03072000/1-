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
	class_vector addition_result;
	addition_result.x = x + a.x;
	addition_result.y = y + a.y;
	addition_result.z = z + a.z;
	return addition_result;
}

class_vector class_vector::operator-(class_vector a)
{
	class_vector subtraction_result;
	subtraction_result.x = x - a.x;
	subtraction_result.y = y - a.y;
	subtraction_result.z = z - a.z;
	return subtraction_result;
}


class_vector class_vector::operator*(class_vector a)
{
		class_vector multiplication_result;
		multiplication_result.x = (y * a.z) - (z * a.y);
		multiplication_result.y = (z * a.x) - (x * a.z);
		multiplication_result.z = (x * a.y) - (y * a.x);
		return multiplication_result;
}

class_vector class_vector::operator*(double a)
{
	class_vector multiplication_result;
	multiplication_result.x = x * a;
	multiplication_result.y = y * a;
	multiplication_result.z = z * a;
	return multiplication_result;
}

void class_vector::operator*=(double a)
{
	x *= a;
	y *= a;
	z *= a;
}

class_vector class_vector::operator/(class_vector a)
{
	class_vector division_result;
	division_result.x = (y * (1 / a.z)) - (z * (1 / a.y));
	division_result.y = (z * (1 / a.x)) - (x * (1 / a.z));
	division_result.z = (x * (1 / a.y)) - (y * (1 / a.x));
	return division_result;
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
	class_vector multiplication_result;
	multiplication_result.x = (y * a.z) - (z * a.y);
	multiplication_result.y = (z * a.x) - (x * a.z);
	multiplication_result.z = (x * a.y) - (y * a.x);
	x = multiplication_result.x;
	y = multiplication_result.y;
	z = multiplication_result.z;
}

void class_vector::operator/=(class_vector a)
{
	class_vector division_result;
	division_result.x = (y * (1 / a.z)) - (z * (1 / a.y));
	division_result.y = (z * (1 / a.x)) - (x * (1 / a.z));
	division_result.z = (x * (1 / a.y)) - (y * (1 / a.x));
	x = division_result.x;
	y = division_result.y;
	z = division_result.z;
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
