#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
int num;
cout << rand() << endl; //outputs a random number, but the same one is output each time the program is ran
srand(time(0)) ;


    return 0;
} //incomplete