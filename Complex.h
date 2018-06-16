#pragma once

#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
	double real;
	double imaginary;

public:
	Complex(double a, double  b);
	Complex(double a);
	Complex();

	double getRealPart();
	double getImaginaryPart();

	Complex add(Complex a, Complex b);
	Complex subtract(Complex a, Complex b);
	Complex multiply(Complex a, Complex b);
	Complex divide(Complex a, Complex b);
	double abs(Complex a, Complex b);

	Complex operator+=(Complex& a);
	Complex operator-=(Complex& a);
	Complex operator*=(Complex& a);
	Complex operator/=(Complex& a);
	double operator[](int a);
	Complex operator+();
	Complex operator-();
	
};

#endif