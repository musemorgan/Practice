/* Beacause, by default, data is passed by value, data cannot be seen outside of the local program.
It is a local parameter if the data's value information cannot be seen outside of the local program. Here, 
i am going to do a reference paramter to ensure the data is global throughout the program

Ways to pass information throguh functions:
1. pass by value (default)
2. pass by reference ( similar to pass by array, but it is manually done and doesn't lose type information)
3. pass by array 
*/

#include <iostream>
#include <string>

using namespace std;

void swap (int& num1, int& num2) //formal parameters get initalized now to ne used outside of the program whether by reference or by value
{
    int tempNum = num1; // this is a local parameter, so it remains in the program which is why it's being initalized now
    num1 = num2;
    num2 = tempNum;

    cout << "Number 1 = " << num1 << " & Number 2 = " << num2 << "." << endl; // this helps to show that the numbers have swapped
}

int main ()
{
int a, b;
a = 15;
b = 290;

swap(a,b);
    cout << "A = " << a << " & B = " << b << "." << endl; // this is to ensure the numbers have remained swapped outside of the local swap program 
    return 0;
}