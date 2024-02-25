//Write a program that prompts the user to enter two integers. The program outputs how many numbers are
// multiples of 3 and how many numbers are multiples of 5 between the two integers (inclusive).
#include <iostream>


using namespace std;

int main()
{
// Here is everything we'll need:
//1. prompt users to enter two integers
//2. Something that calculates whether something is a multiple of 3 or 5 or none
//3. ouput both the values and what they're multiples of 
int num1 = 0, num2 = 0;
bool isMultiple; //determines whether the values can even be a multiple of 3 or 5
cout << "Enter two integers: "<< endl;
cin >> num1 >> num2;
cout << endl;

if (num1 % 5 == 0 )
//|| num1 % 3 == 0)
{
    cout << "Your first integer is " << num1 << ", which is a multiple of 5"<< endl;
    isMultiple = true;
}
    else if (num1 % 3 == 0)
    {
            cout << "Your first integer is " << num1 << ", which is a multiple of 3" <<endl;
            isMultiple = true;
    }

        else if (num1 % 5 != 0 || num1 % 3 !=0)
                {
                    isMultiple = false;
                    cout << "Your first integer is " << num1 << ", which not a multiple of 3 or 5"<< endl;

        }

if (num2 % 5 == 0 )
//|| num1 % 3 == 0)
{
    cout << "Your second integer is " << num2 << ", which is a multiple of 5"<< endl;
    isMultiple = true;
}
    else if (num2 % 3 == 0)
    {
            cout << "Your second integer is " << num2 << ", which is a multiple of 3" << endl;
            isMultiple = true;
    }

        else if (num2 % 5 != 0 || num1 % 3 !=0)
                {
                    isMultiple = false;
                    cout << "Your second integer is " << num2<<", which not a multiple of 3 or 5"<< endl;

                  }




    return 0;
}