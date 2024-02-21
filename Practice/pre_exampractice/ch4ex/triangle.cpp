//In a right triangle, the square of the length of one side is equal to the sum 
//of the squares of the lengths of the other two sides. Write a program that prompts 
//the user to enter the lengths of three sides of a triangle and then outputs a message 
//indicating whether the triangle is a right triangle.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

double mainSide = 0;
double lengthOne = 0;
double lengthTwo = 0;
double sumOfSides, sumOfMain;
int sumOfBoth;

cout << "Enter 3 numbers: " << endl;
cin >> lengthOne >> lengthTwo >> mainSide;

sumOfSides = (lengthOne *lengthOne) + (lengthTwo * lengthTwo);
sumOfMain = mainSide * mainSide;
sumOfBoth = (sumOfMain == sumOfSides);
// In order for this code to work properly, I had to initalize the math functions below the
//user input to ensure the output was properly executed

switch (sumOfBoth)
{
case true:
    cout << "This is a right triangle" << endl;
    break;
case false:
    cout << "This is a regular triangle" << endl;
    break;
default:
    cout << "There was an error within the input and/or output" << endl;
    break;
} 


 return 0;
}