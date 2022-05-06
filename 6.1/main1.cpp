#include "Ex61.h"

int main() {
	setlocale(0, "");
	Complex c1(1, 2), c2(-3, 4), rez;
	cout << "1 + 2 = " << sum(1, 2) << endl;
	cout << "1.2 + 2.6 = " << sum(1.2, 2.9) << endl;
	cout << "1 + 3 = " << sum("1", "3") << endl;
	cout << "(1+2i) + (-3+4i) = ";
	rez = c1.sum(c2);
	rez.printComplex();
	cout << "1 - 2 = " << subtraction(1, 2) << endl;
	cout << "1.2 - 2.6 = " << subtraction(1.2, 2.9) << endl;
	cout << "1 - 3 = " << subtraction("1", "3") << endl;
	cout << "(1+2i) - (-3+4i) = ";
	rez = c1.subtraction(c2);
	rez.printComplex();
	cout << "1 * 2 = " << multiply(1, 2) << endl;
	cout << "1.2 * 2.6 = " << multiply(1.2, 2.9) << endl;
	cout << "1 * 3 = " << multiply("1", "3") << endl;
	cout << "(1+2i) * (-3+4i) = ";
	rez = c1.multiply(c2);
	rez.printComplex();
	cout << "1 / 2 = " << division(1, 2) << endl;
	cout << "1.2 / 2.6 = " << division(1.2, 2.9) << endl;
	cout << "1 / 3 = " << division("1", "3") << endl;
	cout << "(1+2i) / (-3+4i) = ";
	rez = c1.division(c2);
	rez.printComplex();
	return 0;
}