#include <iostream>
#include <string>

using namespace std;

int main()
{
char currentStanding; //must either be a char or num indentifier for switch statments

cout << " Insert your current college level" << endl;
cin >> currentStanding;
cout << endl;

switch (currentStanding)
{
case 'U':
    cout << "This student is in undergraduate standing";
    break;
case 'G':
    cout << "This student is in graduate standing";
    break;
default:
    cout << "This student is not currently within a graduate or undergraduate program";
}


    return 0;
}