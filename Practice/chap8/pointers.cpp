#include <iostream>

using namespace std;

int main ()
{

int studentId = 119976;
string name = "Morgan";

int* pStudentId = &studentId;
string* pName = &name;
//* is a de-reference operator that prints value stored in the memory space of the requested variable 
//p[variable name] is a naming convention that people use to create the pointer of a specific variable
//&[varibale name] is a reference to the address of the specific variable

cout << pStudentId << endl;
cout << pName << endl;

//This will output the memory location, not the value of the variable. May not seem useful now, but is useful
//for dynamic arrays
    return 0;
}