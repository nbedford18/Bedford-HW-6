#include "14.3 circle.h"

int Circle::numberOfObjects = 0;
Circle::Circle(){
	radius = 1;
	numberOfObjects++;

}
Circle::Circle(double newRadius){
	radius = newRadius;
	numberOfObjects++;
}
double Circle::getArea() const{
	return radius*radius*3.14159;
}
double Circle::getRadius()const{
	return radius;
}
void Circle::setRadius(double newRadius){
	radius = (newRadius >= 0) ? newRadius : 0;
}
int Circle::getNumberOfObjects(){
	return numberOfObjects;
}
bool Circle::operator==(Circle& c){
	return (Circle::getArea()==c.getArea());

}
bool Circle::operator<(Circle& c){
	return (Circle::getArea() < c.getArea());
}
bool Circle::operator>(Circle& c){
	return(Circle::getArea() > c.getArea());
}
bool Circle::operator<=(Circle& c){
	return(Circle::getArea() <= c.getArea());
}
bool Circle::operator>=(Circle& c){
	return(Circle::getArea() >= c.getArea());
}
bool Circle::operator!=(Circle& c){
	return(Circle::getArea() != c.getArea());
}