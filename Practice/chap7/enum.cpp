/* enum types cannot be output or input normally like most other data types. This program illustrates how
output and input can take place
*/

#include <iostream>

using namespace std;

int main ()
{
enum hairtype
{
    straight = 1, wavy, curly, kinky
};

hairtype texture; //Allows you to associate texture to the data type of hairtype. Now, you can type in
//the full word of your hairtype below and it'll pull from the enum types listed above.
char typeFL; 
cout << "Enter the first letter of your hairtype" << endl;
cin >> typeFL; //hair type first letter

switch (typeFL)
{
case 's':
    texture = straight;
    cout <<  "You have type " << texture << " hair ! Straight hair can be very thick";
    cout << "or very fine and this is typically determined by genetics" << endl;
    break;
case 'w':
    texture = wavy;
    cout << "You have type " << texture << " hair ! The texture right after straight which means it has similar traits, but holds a curl a bit better" << endl;
    break;
case 'c': 
    texture = curly;
    cout << "You have type  " << texture << " hair ! Curly hair can often be very thick and the different textures between 3a-4a can be vastly different!" << endl;
    break;
case 'k':
    texture = kinky;
    cout << "You have type " << texture << " hair ! Kinky hair is often very thick and experiences a lot of shrinkage which is a great sign of healthy hair!!" << endl;
    break;
default:
    cout<< "Error: incorrect input.";
    break;
}


    return 0;
}