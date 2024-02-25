//Instructions
//Write a program that prompts the user to input an integer and then outputs both the individual digits 
//of the number and the sum of the digits. For example, it should output the individual digits of 3456 as 
//3 4 5 6, output the individual digits of 8030 as 8 0 3 0, output the individual digits of 2345526 as
// 2 3 4 5 5 2 6, output the individual digits of 4000 as 4 0 0 0, and output the individual digits of
// -2345 as 2 3 4 5.

#include <iostream>

using namespace std;

int main()
{
int num1, num2, num3, num4, counter;
num1 = 0;
num2 = 0;
num3 = 0;
num4 = 0;
counter = 4;

cout << "Input 4 numbers: "<< endl;
cin >> num1 >> num2 >> num3>> num4;

while (counter > 0)
{
    cout << "User Input: " << endl;
    cout << num1 << num2 << num3 << num4 << endl;

    cout << num1<< " ";
    counter--;
    cout << num2 << " ";
    counter--;
    cout << num3 << " ";
    counter--;
    cout << num4 << " ";
    counter--;
    cout << endl;
}
 
    return 0;
}