#include <iostream>
using namespace std;

void welcome(string name)
{
cout << "Hey! " << name << " welcome to my program! " << endl;
};
void goodbye(string name)
{
cout << "Well " << name << ", it was nice getting to know you! See ya next time!" << endl;
};

int main()
{
string username, input;
cout << "Enter your name " << endl; // i added user input to translate the information to the parameters
cin >> username;
    welcome(username);
    cin >> input;
    goodbye(username);

    return 0;
}