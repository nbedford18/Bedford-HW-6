#include "14.7 complex.h"
#include<cmath>
Complex::Complex(){
	object = 0;
}
Complex::Complex(double newa, double newb){

}
Complex::Complex(double newa){
	a = newa;
	b = 0;
}
double Complex::getRealPart(){
	return (object - (b*i));
}
double Complex::getImaginaryPart(){
	return(object - a);
}
double Complex::add(Complex& c){
	E = (Complex::getRealPart() + c.getRealPart());
	d = ((Complex::getImaginaryPart() / i) + (c.getImaginaryPart() / i)*i);

	return (E + d);
	

}
double Complex::divide(Complex& d){
	c = (Complex::getRealPart()*d.getRealPart() + Complex::getImaginaryPart() / i*d.getImaginaryPart() / i) / (pow(d.getRealPart(), 2) + pow(d.getImaginaryPart() / i, 2));
	F= (((Complex::getImaginaryPart() / i*d.getRealPart() - Complex::getRealPart()*d.getImaginaryPart() / i)*i) / pow(d.getRealPart(), 2) + pow(d.getImaginaryPart() / i, 2));

	return (c + F);
}
double Complex::subtract(Complex& c){
	H = (Complex::getRealPart() - c.getRealPart());
	I = ((Complex::getImaginaryPart() / i) - (c.getImaginaryPart() / i)*i);
	return (H + I);

}
double Complex::multiply(Complex& c){
	G= ((Complex::getRealPart()*c.getRealPart()) - (Complex::getImaginaryPart() / i)*(c.getImaginaryPart() / i));
	J= ((Complex::getImaginaryPart() / i*c.getRealPart()) + (Complex::getRealPart()*c.getImaginaryPart() / i)*i);
	return (G + J);
}
double Complex::absolut(){
	return sqrt(pow(Complex::getRealPart(), 2) + pow(Complex::getImaginaryPart() / i, 2));
}
string Complex::toString(){
	return complex;
	
}
 double Complex::operator+(Complex& c){
	 return ((Complex::getRealPart() + c.getRealPart()) + ((Complex::getImaginaryPart() / i) + (c.getImaginaryPart() / i)*i));


}
 double Complex::operator-(Complex& c){
	 return ((Complex::getRealPart() - c.getRealPart()) + ((Complex::getImaginaryPart() / i) - (c.getImaginaryPart() / i)*i));
}
double Complex::operator*(Complex& c){
	return (((Complex::getRealPart()*c.getRealPart()) - (Complex::getImaginaryPart() / i)*(c.getImaginaryPart() / i)) + ((Complex::getImaginaryPart() / i*c.getRealPart()) + (Complex::getRealPart()*c.getImaginaryPart() / i)*i));

}
 double Complex::operator/(Complex& c){
	 return ((Complex::getRealPart()*c.getRealPart() + Complex::getImaginaryPart() / i*c.getImaginaryPart() / i) / (pow(c.getRealPart(), 2) + pow(c.getImaginaryPart() / i, 2)) + (((Complex::getImaginaryPart() / i*c.getRealPart() - Complex::getRealPart()*c.getImaginaryPart() / i)*i) / pow(c.getRealPart(), 2) + pow(c.getImaginaryPart() / i, 2)));

}
double Complex::operator+=(Complex& c){
	return Complex::add(c);
}
double Complex::operator-=(Complex& c){
	return Complex::subtract(c);
}
double Complex::operator*=(Complex& c){
	return Complex::multiply(c);
}
double Complex::operator/=(Complex& c){
	return Complex::divide(c);
}
void Complex::operator[](Complex& c){
	double d[2];
	d[0] = c.a;
	d[1] = c.b;


}
//double Complex::operator+(Complex& c){
	//return c.add();
//}
//double Complex::operator-(Complex& c){
	//return -c.add();
//}
double Complex::operator++(int c){
	c = 0;
	return c++;
}
double Complex::operator--(int c){
	c = 0;
	return c--;

}
//double Complex::operator++(int c){
	//c = 0;
	//return ++c;

//}
//double Complex::operator--(int c){
	//c = 0;
	//return --c;

//}
ofstream Complex::operator<<(Complex& c){
	ofstream out;
	out << c.a << " + " << c.b << "i = " << c.c << " + " << c.d << endl;
	return out;


}
ifstream Complex::operator>>(Complex& c){
	ifstream in;
	//cout << "Enter the first complex number: ";
	in >> c.a >> c.b;
	return in;
}