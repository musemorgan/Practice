/*Write a program that uses while loops to perform the following steps:
Prompt the user to input two integers: firstNum and secondNum (firstNum must be less than secondNum).
Output all odd numbers between firstNum and secondNum.
Output the sum of all even numbers between firstNum and secondNum.
Output the numbers and their squares between 1 and 10.
Output the sum of the square of the odd numbers between firstNum and secondNum.
Output all uppercase letters.*/

#include <iostream>

using namespace std;
int main()
{
int firstNum = 0, secondNum = 0, rangeNum = 0, sumNumber =0, previousFirstValue = 0, newValue = 0;
bool isEven = true;
//pulls input from user
cout << "Input two numbers: The first number must be smaller than the second number." << endl;
cin >> firstNum >> secondNum;
rangeNum = firstNum;
previousFirstValue = firstNum;

cout<< "The two integers and the range of odd values between those values equals: \n" << firstNum;

//determines if the number is even or odd and changes it to odd (if applicable) to fit the formula better 
if (firstNum % 2 == 0)
{
    rangeNum = rangeNum + 1;
    isEven = false;
}
else 
    {
        isEven = false;
    }


//outputting range of odd numbers between
do 
    {
        rangeNum = rangeNum + 2;
        cout << " " << rangeNum << " ";
    }
while (!isEven && rangeNum > firstNum && rangeNum < secondNum);

if (rangeNum != secondNum && rangeNum < secondNum)
cout << " "<< secondNum << endl;

//Outputting the sum of all even numbers 
cout << "\nThe even numbers in between the input integers is: ";
if (firstNum % 3 == 0)
{
    previousFirstValue = previousFirstValue - 1;
}

do 
{
newValue = previousFirstValue;
cout << newValue << " ";
previousFirstValue = previousFirstValue + newValue;
}
while (previousFirstValue < secondNum && previousFirstValue > firstNum);

cout << endl;
cout << "The sum of these digits = " << previousFirstValue << endl;



    return 0;
}
