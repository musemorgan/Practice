#include <iostream>

using namespace std;

int main ()
{
int numOfProducts;
cout << "How many products are in your store?: " << endl;
cin >> numOfProducts;
cin.ignore();

string* pNumOfProd = new string[numOfProducts];
// pointer which creates new index cases in the array. The number of 
//indexes is static upon user input (numofproducts).
/*new is a reserved word*/
for (int i = 0; i < numOfProducts; i++)
{
    cout << "Enter product # " << i+1<< " " << endl;
    getline(cin, pNumOfProd[i]); //This is a pointer to ensure the input from 
    //the user is collected even if there is a space.
}

cout << "\nHere are the current products in your inventory: \n" << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" << endl;

for (int i = 0; i < numOfProducts; i++)
{
cout << "Product # " << i + 1 << " " << pNumOfProd[i] << endl;
}

    return 0;
}