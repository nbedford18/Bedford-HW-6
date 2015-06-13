#ifndef CIRCLE_H
#define CIRCLE_H
class Circle{
private:
	double radius;
	static int numberOfObjects;
public:
	Circle();
	Circle(double newRadius);
	double getArea() const;
	double getRadius() const;
	void setRadius(double newRadius);
	static int getNumberOfObjects();
	bool operator==(Circle& c);
	bool operator>(Circle& c);
	bool operator<(Circle& c);
	bool operator>=(Circle& c);
	bool operator<=(Circle& c);
	bool operator!=(Circle& c);

};
#endif