#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	string filename;
	cout << "Enter a file name: ";
	cin >> filename;
	ifstream file;
	file.open(filename);
	if (file.fail()){
		cout << filename << " does not exist." << endl;
		return 0;
	}
	string line;
	int c = 0;
	while (getline(file, line)){
		c += line.length();

	}
	cout <<filename<<" has "<<c<<" characters." << endl;
	file.close();
}