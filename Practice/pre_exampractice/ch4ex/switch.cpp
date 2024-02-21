//Write a program that prompts the user to input an integer between 0 and 35.
// If the number is less than or equal to 9, the program should output the 
//number; otherwise, it should output A for 10, B for 11, C for 12,..., 
//and Z for 35. 
//(Hint: Use the cast operator, static_cast<char>(), for numbers >= 10.)

#include <iostream>


using namespace std;

int main()
{
int input;
cout << "Enter an integer between 0 and 35: ";
cin >> input;

switch(input)
{
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
    cout << input << endl;
break;
case 10 ... 35: //gives a range between the numbers. The space between the elpises and numbers are important.
    if (input >=10 && input <36)
    {
    cout << static_cast<char>('A' + (input-10)) << " for " << input <<endl;
    }//allows the program to output the ASCII letters starting from the character 10
    //and the if...else had to be used because boolean characters don't work on switch statements 
        else 
        {
        cout << "Invalid" << endl;
        }
    break;
default:
    cout << "Error: This number was not within either set of ranges" <<endl;
    break;
}



    return 0;
}