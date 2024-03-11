#include <iostream>
#include <string>

using namespace std;

double multiply(double one, double two) //must make sure that the name of the program and its parameters have data types
{
double answer = one * two;
return answer;
}; // semincolons are needed after the brackets and inside the body for syntax purposes

int main()
{
double number1, number2;
cout << "Enter two numbers: "<< endl;
cin >> number1 >> number2;
cout << endl;
cout << " The product of " << number1 << " and " << number2 << " = " << multiply(number1, number2) << endl;


    return 0;
}