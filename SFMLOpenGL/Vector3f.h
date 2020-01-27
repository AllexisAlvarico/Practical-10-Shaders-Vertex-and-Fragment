#pragma once

#include <iostream>
#include <string>


class Vector3f
{
public:
	Vector3f();

	double m_x;
	double m_y;
	double m_z;

	Vector3f(double t_x, double t_y, double t_z);
	std::string toString();


	Vector3f operator +(const Vector3f t_right) const;
	Vector3f operator -(const Vector3f t_right) const;
	Vector3f operator -(Vector3f V);
	double operator *(Vector3f V) const;
	Vector3f operator *(const double k) const;
	Vector3f operator *(const float k) const;
	Vector3f operator *(const int k) const;
	Vector3f operator /(const double t_divisor) const;
	Vector3f operator ^(Vector3f V1) const;
	double length()const;
	double lengthSquared()const;
	void normalise(); // vector changes and will have length 1 
};
