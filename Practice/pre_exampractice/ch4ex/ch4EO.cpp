#include <iostream>
#include <string>

using namespace std;

int main()
{

int number;

cout << "Enter a number: " << endl;
cin >> number;

if (number % 2 == 0)
    cout << number << " is a positive integer!";
else 
    if (number % 2 == 1 or number % 2 == -1)
    cout << number << " is a negative integer!";
else 
    if (number == 0)
    cout << number << "is zero.";




    return 0;
}