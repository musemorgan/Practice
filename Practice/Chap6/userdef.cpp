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
string input;

    welcome("Morgan");
    cin>>input;
    goodbye("Morgan");

    return 0;
}