//Implement a program that has multiple functions, including one that 
//converts temperatures from Celsius to Fahrenheit and 
//vice versa. Experiment with local and global variables.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int Fahrenheit(int f){
int result;
result = (f * 1.8) + 32;
return result;
}

int Celsius (int c){
int result;
result = (c - 32) * 5/9;
return result;
}


int main (){
int Input, a, b, x;
char Equation, arithType, degrees;

cout << "What kind of equation would you like to execute? Enter M for Mathematics or T Temparature Conversion? "<< endl;
cin >> Equation;

if (Equation == 'M')
{
     cout << "What kind of operation? *, +, - , or / ?" <<endl;
     cin >> arithType;
        if (arithType == '*') 
        {
            Input = 1;
        }
        else if (arithType == '+')
        {
            Input = 2;
        }
        else if (arithType == '-')
        {
            Input = 3;
        }
        else if (arithType == '/')
        {
            Input = 4;
        
        }   
} // be sure to close the original if statement before moving onto the else if 
else if (Equation == 'T')
    {
        Input = 5;
    }


switch (Input) 
{
case 1: //the body of a case program does not require brackets
    cout << "Enter the integers you would like to multiply: " << endl;
    cin >> a >> b;
    cout << a << " * " << b <<  " = " << a * b << endl;
    cout << "============= Program Complete ==================" << endl;
    break;

case 2:
cout << "Enter the integers you would like to Add: " << endl;
    cin >> a >> b;
    cout << a << " + " << b <<  " = " << a + b << endl;
    cout << "============= Program Complete ==================" << endl;
    break;

case 3:
cout << "Enter the integers you would like to Subtract: " << endl;
    cin >> a >> b;
    cout << a << " - " << b <<  " = " << a - b << endl;
    cout << "============= Program Complete ==================" << endl;
    break;

case 4:
cout << "Enter the integers you would like to divide: " << endl;
    cin >> a >> b;
    cout << a << " / " << b <<  " = " << a / b << endl;
    cout << "============= Program Complete ==================" << endl;
    break;

case 5:
cout << "Enter what the current temperature is and F for Fahrenheit and C for Celsius: " <<endl ;
cin >> x >> degrees;

if (degrees == 'F')
{

    cout << "The temperature is currently " << Fahrenheit(x) << " Celsius" <<endl;
        cout << "============= Program Complete ==================" << endl;

}
    else if (degrees == 'C')
    {
        cout << "The temperature is currently " << Celsius(x) << " Fahrenheit" << endl;
            cout << "============= Program Complete ==================" << endl;

    }
    break;
default:
    cout << "Error in case 5" << endl;
    break;

}

return 0;
}