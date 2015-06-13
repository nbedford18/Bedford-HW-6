#include <iostream>
#include "14.7 complex.h"
using namespace std;
int main(){
	Complex c1;
	cout << "Enter the first complex number: ";
	cin >> c1.a >> c1.b;
	Complex c2;
	cout << "Enter the second comples number: ";
	cin >> c2.a >> c2.b;
	cout << "(" << c1.a << " + " << c1.b << "i) + (" << c2.a << " + " << c2.b << "i) = " << c1.add(c2)-c1.d << " + " << c1.add(c2)-c1.E << endl;
	cout << "(" << c1.a << " + " << c1.b << "i) - (" << c2.a << " + " << c2.b << "i) = " << c1.subtract(c2) - c1.I << " + " << c1.subtract(c2) - c1.H << endl;
	cout << "(" << c1.a << " + " << c1.b << "i) / (" << c2.a << " + " << c2.b << "i) = " << c1.divide(c2) - c1.F << " + " << c1.divide(c2) - c1.c << endl;
	cout << "(" << c1.a << " + " << c1.b << "i) * (" << c2.a << " + " << c2.b << "i) = " << c1.multiply(c2) - c1.J << " + " << c1.multiply(c2) - c1.G << endl;
	cout << "|" << c1.a << " + " << c1.b << "i| =" << c1.absolut() << endl;


}