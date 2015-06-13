#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
using namespace std;
int main(){
	fstream inout;
	string filename = "c:\\users\\Noelle\\desktop\\Exercise13_1.txt";
	inout.open(filename, ios::out);
	if (inout.fail()){
		cout << "could not open file" << endl;
		return 0;
	}
	srand(time(NULL));
	int x[100];
	for (int i = 0; i < 100; i++){
		x[i] = rand() % 100;
		inout<< x[i] << endl;
	}
	inout.close();

}