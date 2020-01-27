#include "Vector3f.h"

Vector3f::Vector3f() :
	m_x {0.0},
	m_y {0.0},
	m_z {0.0}
{
}


Vector3f::Vector3f(double t_x, double t_y, double t_z)
{
	m_x = t_x;
	m_y = t_y;
	m_z = t_z;
}


std::string Vector3f::toString()
{
	return ("X: " + std::to_string(m_x) + ",Y: " + std::to_string(m_y) + ",Z:" + std::to_string(m_z) + "\n");
}

Vector3f Vector3f::operator+(const Vector3f t_right) const
{

	return { t_right.m_x + m_x, t_right.m_y + m_y, t_right.m_z + m_z };
}

Vector3f Vector3f::operator-(const Vector3f t_right) const
{
	return { t_right.m_x - m_x, t_right.m_y - m_y, t_right.m_z - m_z };
}

Vector3f Vector3f::operator-(Vector3f V)
{
	Vector3f V1;
	V1.m_x = -V.m_x;
	V1.m_y = -V.m_y;
	V1.m_z = -V.m_z;
	return V1;
}



Vector3f Vector3f::operator*(const double k) const
{
	return { k * m_x, k * m_y, k * m_z };
}

double Vector3f::operator*(Vector3f V) const
{
	return (m_x * V.m_x + m_y * V.m_y + m_z * V.m_z);
}

Vector3f Vector3f::operator*(const float k) const
{
	return { k * m_x, k * m_y, k * m_z };
}

Vector3f Vector3f::operator*(const int k) const
{
	return { k * m_x, k * m_y, k * m_z };
}

Vector3f Vector3f::operator/(const double t_divisor) const
{
	return { m_x / t_divisor ,  m_y / t_divisor ,  m_z / t_divisor };
}

Vector3f Vector3f::operator^(Vector3f V1) const
{
	return { m_y * V1.m_z - m_z * V1.m_y, m_z * V1.m_x - m_x * V1.m_z, m_x * V1.m_y - m_y * V1.m_x };
}

double Vector3f::length() const
{
	return sqrt(m_x * m_x + m_y * m_y + m_z * m_z);
}

double Vector3f::lengthSquared() const
{
	return (m_x * m_x + m_y * m_y + m_z * m_z);
}

void Vector3f::normalise()
{
	//Vector3f m_newVector = {}; // vector's assignments
	if (length() > 0.0)
	{
		double m_mag = length();
		m_x = m_x / m_mag; // gets the x-value
		m_y = m_y / m_mag; // gets the y-value
		m_z = m_z / m_mag; 
		// gets the z-value
	}


}
