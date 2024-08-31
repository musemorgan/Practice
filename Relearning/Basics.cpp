#include <iostream>
#include <string>
using namespace std;
int main (){
// Problem 1: Create a calculator program that takes two numbers as input and performs addition,
// subtraction, multiplication, and division using the appropriate operators.

int num, num2;
int Addition, Subtraction, Multiplication, Division; //must be int data type to process the user input 

cout << "Enter 2 intergers: " << endl;
cin >> num >> num2; //Takes user input
cout << "The intergers are as follows: " << num << " and " << num2 <<endl;

Addition = num + num2;
Subtraction = num - num2;
Multiplication = num*num2;
Division = num/num2;
// Putting this below the initialization of num and num2 allows the values to accurately process 

cout << "Let's do some artihmetic: " << Addition << " " << Subtraction << " " << Multiplication<< " " << Division << endl;
return 0;
}