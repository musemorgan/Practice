/*Create a template function called findMax that takes two arguments of any data type and returns the larger of the two values.
Specifications
Template Function: Define a template function findMax that takes two parameters of type T.
Return Value: The function should return the value of the larger argument.
Testing: In main(), call findMax with different data types (e.g., integers, doubles, and characters) to ensure it works with any type.
*/
#include <iostream>
using namespace std;

template <class T> //findMax will represent any data type
T findMax(T a, T b ) //anyType is the name of a class
{
    return (a>b) ? a:b;
}
template <class T>
T findMin(T y, T z)
{
    return (y<z)? y:z;
}


int main(){
int x, y, a, b;
cout << "Enter two digits: " << endl;
cin >> x >> y;
int maxInt = findMax<int>(x,y);
cout << "The largest value between " << x << " & " << y << " is: " << maxInt << endl;

cout << "Enter two different digits: "<< endl;
cin >> a >> b;
int mini = findMin<int>(a,b);
cout << "The smallest of the digits " << a << " & " << b << " is " <<  mini << endl;

    return 0;
}