// EX06_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Complex.h"
using namespace std;

Complex operator*(Complex & a, Complex & b)
{
	Complex c1 = c1.multiply(a, b);
	return c1;
}

Complex operator-(Complex& a, Complex& b)
{
	Complex c1 = c1.subtract(a, b);
	return c1;
}

Complex operator+(Complex& a, Complex& b)
{
	Complex c1 = c1.add(a, b);
	return c1;
}

Complex operator/(Complex& a, Complex& b)
{
	Complex c1 = c1.divide(a, b);
	return c1;
}

int main()
{
	double r, i;
	cout << "Enter a complex number: " << endl;
	cin >> r;
	cin >> i;

	Complex r1(r, i);

	double r_2, i_2;
	cout << "enter another complex number: " << endl;
	cin >> r_2;
	cin >> i_2;

	Complex r2(r_2, i_2);
	
	Complex a = r1 + r2;
	cout << a.getRealPart() << " + " << a.getImaginaryPart() << "i" << endl;
	
	Complex s = r1 - r2;
	cout << s.getRealPart() << " + " << s.getImaginaryPart() << "i" << endl;

	Complex t = r1 * r2;
	cout << t.getRealPart() << " + " << t.getImaginaryPart() << "i" << endl;

	Complex u = r1 / r2;
	cout << u.getRealPart() << " + " << u.getImaginaryPart() << "i" << endl;




    return 0;
}

