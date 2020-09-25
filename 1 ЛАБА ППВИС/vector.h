#pragma once

#ifndef _VECTOR_H
#define _VECTOR_H

#include <iostream>
#include <math.h>

using namespace std;

class class_vector {
public:
	
	class_vector(double m_x = 0.0, double m_y = 0.0, double m_z = 0.0) : x(m_x),y(m_y),z(m_z)
	{
	}

	void operator=(class_vector a);

	friend istream& operator>>(istream& in,class_vector& a);

	friend ostream& operator<<(ostream& out, class_vector& a);

	void operator+=(class_vector a);
	
	void operator-=(class_vector a);

	void operator*=(class_vector a);

	void operator/=(class_vector a);

	void operator*= (double a);

	bool operator>(class_vector a);

	bool operator<(class_vector a);

	bool operator<=(class_vector a);

	bool operator>=(class_vector a);

	bool operator==(class_vector a);

	bool operator!=(class_vector a);

	double operator^(class_vector a);

	double vector_lenght();

	class_vector operator+ (class_vector a );

	class_vector operator- (class_vector a);

	class_vector operator* ( class_vector a);

	class_vector operator* (double a);

	class_vector operator/ (class_vector a);

private:
	
	double x, y, z;

};

#endif 