#include "Complex.h"

Complex::Complex(double a, double b)
{
	real = a;
	imaginary = b;
}

Complex::Complex(double a)
{
	real = a;
	imaginary = 0;
}

Complex::Complex()
{
	real = 0;
	imaginary = 0;
}

double Complex::getRealPart()
{
	return real;
}

double Complex::getImaginaryPart()
{
	return imaginary;
}

Complex Complex::add(Complex a, Complex b)
{
	double r = a.real + b.real;
	double i = a.imaginary + b.imaginary;
	return Complex(r, i);
	
}

Complex Complex::subtract(Complex a, Complex b)
{
	double r = a.real - b.real;
	double i = a.imaginary - b.imaginary;
	return Complex(r, i);
}

Complex Complex::multiply(Complex a, Complex b)
{
	double r = (a.real * b.real) - (a.imaginary * b.imaginary);
	double i = (a.imaginary * b.real) + (a.real * b.imaginary);
	return Complex(r, i);
}

Complex Complex::divide(Complex a, Complex b)
{
	double r = ((a.real * b.real) + (a.imaginary * b.imaginary)) / ((b.real * b.real) + (b.imaginary * b.imaginary));
	double i = ((a.imaginary * b.real) - (a.real * b.imaginary)) / ((b.real * b.real) + (b.imaginary * b.imaginary));
	return Complex(r, i);
}

double Complex::abs(Complex a, Complex b)
{
	real = sqrt((a.real * a.real) + (b.imaginary * b.imaginary));
	return real;
}

//Complex operator*(Complex & a, Complex & b)
//{
//	Complex c1;
//	c1.multiply(a, b);
//	return c1;
//}
//
//Complex operator-(Complex& a, Complex& b)
//{
//	Complex c1 = c1.subtract(a, b);
//}
//
//Complex operator+(Complex& a, Complex& b)
//{
//	Complex c1 = c1.add(a, b);
//	return c1;
//}
//
//Complex operator/(Complex& a, Complex& b)
//{
//	Complex c1;
//	c1.divide(a, b);
//	return c1;
//}

Complex Complex::operator+=(Complex & a)
{
	this->real += a.real;
	return *this;
}

Complex Complex::operator-=(Complex & a)
{
	this->real -= a.real;
	return *this;
}

Complex Complex::operator*=(Complex & a)
{
	this->real *= a.real;
	return *this;
}

Complex Complex::operator/=(Complex & a)
{
	this->real /= a.real;
	return *this;
}

double Complex::operator[](int a)
{
	if (a == 0)
		return real;
	else if (a == 1)
		return imaginary;
	else
		return real;
}

Complex Complex::operator+()
{
	return Complex(real, imaginary);
}

Complex Complex::operator-()
{
	return Complex(-real, -imaginary);
}
