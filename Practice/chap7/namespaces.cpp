#include <iostream>
#include <cmath>

namespace globalConstant
{
double PI = 3.14;
};

namespace rounding
{
int PI = round(3.14);
};


using namespace std; // this is here because now all the identifiers like cout require the standard namespace.
int main ()
{
cout << "Here are the differences between the namespaces and their definitions inside. ";
cout << "\nPI within the global constant namespace = ";
cout << globalConstant::PI << endl; 
/* You must use the prefix ::[name of namespace] before the actual output (which is defined within the definition
of the namespace) in order to utilize the namespaces functions. Seeing as though there are 2 definitons with 
the same name in this program, the prefix helps the computer understand what definiton is pulled and when. */

cout << "However, PI from the rounding namespace = ";
cout << rounding::PI << endl;



    return 0;
}