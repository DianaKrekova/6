#include "Ex61.h"

int sum(int a, int b)
{
	return a + b;
}
double sum(double a, double b)
{
	return a + b;
}

double sum(string a, string b)
{
	try {
		return stod(a) + stod(b);
	}
	catch (std::invalid_argument e) {
		cout << "Error!\n";
	}
}
int subtraction(int a, int b)
{
	return a - b;
}
double subtraction(double a, double b)
{
	return a - b;
}

double subtraction(string a, string b)
{
	try {
		return stod(a) - stod(b);
	}
	catch (std::invalid_argument e) {
		cout << "Error!\n";
	}
}
int multiply(int a, int b)
{
	return a * b;
}
double multiply(double a, double b)
{
	return a * b;
}

double multiply(string a, string b)
{
	try {
		return stod(a) * stod(b);
	}
	catch (std::invalid_argument e) {
		cout << "Error!\n";
	}
}
int division(int a, int b)
{
	if (b != 0)
	{
		return a / b;
	}
	else cout << "Error!\n";
}
double division(double a, double b)
{
	if (b != 0)
	{
		return a / b;
	}
	else cout << "Error!\n";
}

double division(string a, string b)
{
	if (b != "0") {
		try {
			return stod(a) / stod(b);
		}
		catch (std::invalid_argument e) {
			cout << "Error!\n";
		}
	}
	else cout << "Error!\n";
}

Complex::Complex()
{
	im = 0;
	re = 0;
}

Complex::Complex(double im, double re)
{
	this->im = im;
	this->re = re;
}

void Complex::printComplex()
{
	if (im >= 0) {
		cout << this->re << '+' << this->im << 'i' << endl;
	}
	else {
		cout << this->re << this->im << 'i' << endl;
	}
}

Complex Complex::sum(Complex c1)
{
	return Complex(this->re + c1.re, this->im + c1.im);
}
Complex Complex::multiply(Complex c1)
{
	double a = c1.re;
	double b = c1.im;
	double c = this->re;
	double d = this->im;
	return Complex(b * c + a * d, a * c - b * d);
}

Complex Complex::subtraction(Complex c1)
{
	return Complex(this->re - c1.re, this->im - c1.im);
}

Complex Complex::division(Complex c1)
{
	Complex c(0, 0); double r;
	r = this->re * this->re + c1.im * c1.im;
	c.re = (c1.re * this->re + c1.im * this->im) / r;
	c.im = (c1.im * this->re - c1.re * this->im) / r;
	return c;
}

