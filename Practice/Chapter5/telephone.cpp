//The program Telephone Digits outputs only telephone digits that correspond to uppercase letters. 
//Rewrite the program so that it processes both uppercase and lowercase letters and outputs the corresponding
// telephone digit. If the input is something other than an uppercase or lowercase letter, the program must 
//output an appropriate error message.
// 65 - 90 "A-Z" and 97 - 122 "a -z"
#include <iostream>
#include <string>

using namespace std;

int main()
{
int counter;
char charType;
char ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10;
cout << "Input a 10 letters: "<< endl;
cin >> ch1 >> ch2 >> ch3 >> ch4 >> ch5 >> ch6 >> ch7 >> ch8 >> ch9 >> ch10;


for (counter=10; counter > 0; counter-- )
{ 
    cout << static_cast<int>(charType + 1) << endl;
}

/*
 switch (charType)
{
case 'a' ... 'z':
cout << static_cast<int>(charType + 1) << endl;
counter--;
    break;
case 'A' ... 'Z':
cout << static_cast<char>(charType + 1) << endl;
counter--;
    break;

default:
     cout << "Error: Not within range" << endl;
    break;
}
}*/


    return 0;
}