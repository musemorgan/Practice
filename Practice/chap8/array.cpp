#include <iostream>

using namespace std;

int main ()
{

string food [3]; // the number 3 indicates the size of the array
food [0] = "Strawberry";
food [1] = "Orange";
food [2] = "Mango";
// above is one way to list out the contents within the array, but there's an easier way
//0, 1, & 2 represent the index's or the spot within the array. Index's start at 0
cout << food[2] << endl;

string groceryStores[] = {"Trader Joes", "Target", "Greenwise"}; //The size of the array isn't needed because 
//the list of items suggests the number of items within the array along with their indexes. 
//In order to output the entire list of information from the array, you can use a loop.

for (int i = 2; i >=0 ; i-- ) // this makes the output of the grocery stores get output backwards
{
    cout << groceryStores[i];
    cout << " " << endl;
}

    return 0;
}