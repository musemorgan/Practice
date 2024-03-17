#include <iostream>
#include <array>

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

///Here's one last way to make an array (Must include the #include <array> header file name at the top)

array <string,3> cities = {"Tally", "Orlando", "Cinci"}; // this is now an array called cities
for (int i = 0; i<3 ; i++ ) // this makes the output of the grocery stores get output backwards
{
    cout << cities[i];
    cout << ", ";
}
cout << endl;

    return 0;
}