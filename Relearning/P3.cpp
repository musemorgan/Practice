#include <iostream>
using namespace std;
int main (){

int building;
int input = building;

cout << "Let's practice a while and do...while statement!!" << endl;
cout << "Enter what building number you live in: ";
cin >> building;
//This do...while statement states where that persons home is 
do {
    cout << "This is your home!! ";
    input = 0;
}
while (input == building);
//This outputs all even building numbers
while (building <= 20)
{
    if (building%2==0)
    {
        cout << building << endl;
        building++;
    }
    else 
    {
        building++;
    }
}
    return 0;
}