#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
int x = time(0); //generates a new seed for the srand function
srand(x);//places the newly generated seed within the function to help generate a new set of numbers each time
cout << rand() << endl;//randomly generates numbers based upon the random seed


    return 0;
}