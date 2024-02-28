#include <iostream>

using namespace std;

int legalAge ();

int main()
{
cout << legalAge() << endl;
    return 0;
}

int legalAge()
{
int currentAge= 0;
cout << "Enter your age" << endl;
cin >> currentAge;
cout << endl;

if (currentAge >= 21)
{
    cout << "You are of legal age! Your age is: ";
}
else 
{
    cout << "You are not of legal age yet becuase you are only: ";
}
    return currentAge;
}