#include <iostream>
#include <cassert> //needed for an assert command
#include <string>

using namespace std;
string hello = "Hello my name is Morgan. Here's a random Number: ";
int hi = 0;
int main ()
{
cout << "Enter a number" << endl;
cin >> hi;
assert(hi); //assert didn't work on string type
cout << hello << hi <<endl ;

//assert()


    return 0;
}