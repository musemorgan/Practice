#include <string>
#include <iostream>
#include <fstream> // Needed in order to pull and push data to files from outside files

using namespace std;

int main()
{
// you start with declaring variables
//ifstream enFile;
ofstream exFile; //export file info
double gpa; //starting to define info used within the output file
string name;
string classification;


exFile.open("pull.txt");

cout << "Enter you name, GPA, and classification: "<<endl;
cout << showpoint << setprecision(2);//makes the gpa output as a 2 decimal
cin >> name >> gpa >> classification;
exFile << "The student's name is " << name << ", Their GPA is " << gpa << ", and their classification is " << classification << "." << endl;


    return 0;
}