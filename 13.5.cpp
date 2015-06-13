#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	int year;
	char gender;
	string babyname;
	int rank;
	string filename[10];
	ifstream file;
	cout << "Enter the Year: ";
	cin >> year;
 if (year == 2001){
		filename[1] = "C:\\Users\\Noelle\\desktop\\Babynameranking2001.txt";
		file.open(filename[1]);
		if (file.fail()){
			cout << "could not open file" << endl;
			return 0;
		}
	}
	else if (year == 2002){
		filename[2] = "C:\\Users\\Noelle\\desktop\\babynameranking2002.txt";
		file.open(filename[2]);
		if (file.fail()){
			cout << "could not open file" << endl;
			return 0;
		}
	}
	else if (year == 2003){
		filename[3] = "C:\\Users\\Noelle\\desktop\\babynameranking2003.txt";
		file.open(filename[3]);
		if (file.fail()){
			cout << "could not open file" << endl;
			return 0;
		}
	}
	else if (year == 2004){
		filename[4] = "C:\\Users\\Noelle\\desktop\\babynameranking2004.txt";
		file.open(filename[4]);
		if (file.fail()){
			cout << "could not open file" << endl;
			return 0;
		}
	}
	else if (year == 2005){
		filename[5] = "C:\\Users\\Noelle\\desktop\\babynameranking2005.txt";
		file.open(filename[5]);
		if (file.fail()){
			cout << "could not open file" << endl;
			return 0;
		}
	}
	else if (year == 2006){
		filename[6] = "C:\\Users\\Noelle\\desktop\\babynameranking2006.txt";
		file.open(filename[6]);
		if (file.fail()){
			cout << "could not open file" << endl;
			return 0;
		}
	}
	else if (year == 2007){
		filename[7] = "C:\\Users\\Noelle\\desktop\\babynameranking2007.txt";
		file.open(filename[7]);
		if (file.fail()){
			cout << "could not open file" << endl;
			return 0;
		}
	}
	else if (year == 2008){
		filename[8] = "C:\\Users\\Noelle\\desktop\\babynameranking2008.txt";
		file.open(filename[8]);
		if (file.fail()){
			cout << "could not open file" << endl;
			return 0;
		}
	}
	else if (year == 2009){
		filename[9] = "C:\\Users\\Noelle\\desktop\\babynameranking2009.txt";
		file.open(filename[9]);
		if (file.fail()){
			cout << "could not open file" << endl;
			return 0;
		}
	}
	else if (year == 2010){
		filename[10] = "C:\\Users\\Noelle\\desktop\\babynameranking2010.txt";
		file.open(filename[10]);
		if (file.fail()){
			cout << "could not open file" << endl;
			return 0;
		}
	}
	else
		cout << "invalid input" << endl;

	cout << "Enter the gender(M for male and F for female): ";
	cin >> gender;
	if (gender != 'M' ||gender!='m'||gender!='f'|| gender != 'F'){
		cout << "Invalid input" << endl;
	}
	cout <<"Enter the name: ";
	cin >> babyname;
	size_t pos;
	string line;
	while (getline(file, line)){
		pos = line.find(babyname);
		if (pos != string::npos){
			cout << line << endl;
		}
		else
			cout << "the name is not in the file." << endl;

	}
	file.close();
}