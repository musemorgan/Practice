#include <iostream>

using namespace std;
int main(){

int age = 20;
int *ptrAge = &age; 

cout << "*ptrAge = " << *ptrAge << endl; //output = 20 because * requests the value of the operand 
cout << "ptrAge = " << ptrAge << endl; // output = location because & requests the address of the operand 

string students [5] = {"John", "Alex", "Elaine", "Tory", "Megan"};
string *ptrStudents = students; //an error will arise if you set it = to the address operator b/ an array is an address
cout << "*ptrStudents = " << *ptrStudents << endl; // outputs the first value of the array
cout << "ptrStudents = " << ptrStudents << endl; //outputs the address

//figure out how to go down the list of array


    return 0;
}