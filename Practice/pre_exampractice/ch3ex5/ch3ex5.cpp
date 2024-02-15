#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
string lastName;
string firstName;
double currentSalary;
double percentIncrease;
double updatedSalary;

ifstream in;
ofstream out;

in.open("Ch3_Ex5Data.txt");
out.open("chap3x5out.txt");

cout<< fixed << setprecision(2) << showpoint << endl;

in >> lastName >> firstName >> currentSalary >> percentIncrease;
updatedSalary = currentSalary + (currentSalary * (percentIncrease/100));
out << lastName << " " << firstName << " " << " " << updatedSalary << endl;

in >> lastName >> firstName >> currentSalary >> percentIncrease;
updatedSalary = currentSalary + (currentSalary * (percentIncrease/100));
out << lastName << " " << firstName << " " << " " << updatedSalary << endl;

in >> lastName >> firstName >> currentSalary >> percentIncrease;
updatedSalary = currentSalary + (currentSalary * (percentIncrease/100));
out << lastName << " " << firstName << " " << " " << updatedSalary << endl;



    return 0;
}