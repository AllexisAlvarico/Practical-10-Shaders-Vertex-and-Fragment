
#pragma once

#include <iostream>
#include <string>
#include "Vector3f.h"

#define PI 3.14159265358979323846

class Matrix3f
{

public:
	Matrix3f();
	Matrix3f(const Vector3f t_row1, const Vector3f t_row2, const Vector3f t_row3);
	Matrix3f(
		double t_a11, double t_a12, double t_a13,
		double t_a21, double t_a22, double t_a23,
		double t_a31, double t_a32, double t_a33);

	std::string toString()const;
	
	Matrix3f operator +(const Matrix3f t_other) const;
	Matrix3f operator -(const Matrix3f t_other) const;
	Matrix3f operator -();
	Matrix3f operator *(const double x) const;
	Matrix3f operator *(const Matrix3f t_other)const;
	Vector3f operator *(Vector3f V1);

	Matrix3f transpose()const;
	double determinant() const;
	Matrix3f inverse(Matrix3f t_other) const;

	Vector3f row(const int t_row) const; // 0 is first row then 1,2
	Vector3f column(const int t_column) const; // m11, m21, m31

	static Matrix3f rotationZ(const double t_angleRadians); // counterclockwise
	static Matrix3f rotationY(const double t_angleRadians);
	static Matrix3f rotationX(const double t_angleRadians);// {1,-3,2} = MyMatrix3::rotationX(PI/2)*{1,2,3}

	static Matrix3f translation(float dx, float dy); // 2d translation make sure z=1
	static Matrix3f scale(const int dx, int dy);
	static Matrix3f scale3D(double dx);


private:
	double A11;
	double A12;
	double A13;
	double A21;
	double A22;
	double A23;
	double A31;
	double A32;
	double A33;
};

