#include <iostream>

using namespace std;
int main(){

int age = 20;
int *ptrAge = &age; 
// * is the dereference operator and & is the address operator

cout << "==================== Understanding Syntax ==================================" << endl;
cout << "*ptrAge = " << *ptrAge << endl; //output = 20 because * requests the value of &(operand) 
cout << "ptrAge = " << ptrAge << endl; // output = location because & requests the address of the operand it is a pointer of 

string students [5] = {"John", "Alex", "Elaine", "Tory", "Megan"};
string *ptrStudents = students; //an error will arise if you set it = to the address operator b/ an array is an address
cout << "*ptrStudents = " << *ptrStudents << endl; // outputs the first value of the array
cout << "ptrStudents = " << ptrStudents << endl; //outputs the address


//listing all the elements in an array using a pointer
cout << "==================== List of student names =======================" <<endl;
for (int x = 0; x<5; x++)
{
    cout << "Student " << x + 1<< ": " << ptrStudents[x] << endl;
}

//[] serves as the derefernce operator for arrays so they dont require * infront of ptrStudents[x]

    return 0;
}