#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
// Let's create a code that allows us to use cin.get and cin.ignore
char letter;
string name;

cout << "Press the enter key to continue: "<<endl;
cin.get(letter);
cout << "Great! Let's continue and start making charts and columns. "<< endl;
cout << "Hit enter whenever you would like to begin! This will display your column numbers" <<endl;
cin.get(letter);
cout <<"1234567890 - type in your name to give us a closer look at set w"<<endl;
cin >> name;
cout << setw(8)<< setfill('#') << name;





    return 0;

}