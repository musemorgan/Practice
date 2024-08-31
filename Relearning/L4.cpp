#include <iostream>
using namespace std;

int main(){
int hairtype;

cout << "Let's find your hair type! Enter the number that corresponds to your hair texture: ";
cin >> hairtype;

switch (hairtype)
{
case 1:
    cout << "You have type A hair." <<endl;
    break;
case 2:
    cout << "You have type B hair." << endl;
    break;
case 3:
    cout << "You have type C hair." <<endl;
    break;
default:
    cout << "Error: No hair type found." <<endl;
}

    return 0;
}