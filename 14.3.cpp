#include<iostream>
#include "14.3 circle.h"
using namespace std;
int main() {

	Circle c1(10), c2(20), c3(10);
	
	if (c1 > c2)

		cout << "test failed : c1 is smaller than c2\n";

	else

		cout << "passed\n";



	if (c1 == c3)

		cout << "Passed\n";

	else

		cout << "test failed : c1 is equal to c2\n";

}