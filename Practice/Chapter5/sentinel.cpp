#include <iostream>
#include <string>

using namespace std;
int main()
{
//figuring out the average number of years some stays at a corporate company
int years = 0;
int yearsTotal = 0;
int numOfEmployeesEntered = 0;

cout << "Enter the number of years each employee has remained at the company and enter '-1' when you are done" << endl;
cin >> years;
cout << endl;

while (years != -1)
{
    yearsTotal = yearsTotal + years;
    numOfEmployeesEntered++;
    cout << "Enter the number of years each employee has remained at the company and enter '-1' when you are done" << endl;
    cin >> years;
}
cout << "The average number of years these employees have remained at the company equals: ";
cout << yearsTotal / numOfEmployeesEntered << endl;

    return 0;
}