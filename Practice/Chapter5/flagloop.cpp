#include <iostream>
#include <string>

using namespace std; 

int main()
{
bool ethnicity = true; 
string userInput;
int i;
cout << "Enter your ethnicity (options are Black, White, Hispanic or NA): " << endl;
cin >> userInput;
cout << endl;
if (userInput == "Black" || userInput == "White" || userInput == "Hispanic"|| userInput == "NA")
{
    ethnicity = true;
    cout << "User input is " << userInput << " which is valid." << endl;
}
else if (!ethnicity)
{
    ethnicity = false;
    cout << "User input invalid."; 
}

while (ethnicity)
{
    for (i = 0; i <= 3; i++)
    {
        cout << "Hello!" << endl;
        
    }
}
    return 0;
}