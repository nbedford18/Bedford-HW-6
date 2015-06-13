

#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
#include <fstream>
using namespace std;
class Complex{
public:
	double a;
	double b;
	double i = sqrt(-1);
	double object = (a + (b*i));
	string complex;
	double c;
	double E;
	double d;
	double F;
	double H;
	double G;
	double I;
	double J;

	Complex();
	Complex(double newa, double newb);
	Complex(double newa);
	double getRealPart();
	double getImaginaryPart();
	double add(Complex& c);
	double subtract(Complex& c);
	double multiply(Complex& c);
	double divide(Complex& d);
	double absolut();
	string toString();
	double operator+(Complex& c);
	double operator-(Complex& c);
	double operator*(Complex& c);
	double operator/(Complex& c);
	double operator+=(Complex& c);
	double operator-=(Complex& c);
	double operator*=(Complex& c);
	double operator/=(Complex& c);
	void operator[](Complex& c);
	//double operator+(Complex& c);
	//double operator-(Complex& c);
	double operator++(int c);
	double operator--(int c);
	//double operator++(int c);
//	double operator--(int c);
	ofstream operator<<(Complex& c);
	ifstream operator>>(Complex& c);





};
#endif
